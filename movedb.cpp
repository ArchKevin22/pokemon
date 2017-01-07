/* Moves Database 
 * Each move has a power, type, and PP.
 * Max PP can be increased up to 3 times.
 * There may be moves that affect the stats of the Pokemon.
 *   
 */

#include "movedb.h"
#include <ctime>
#include <iostream>
using namespace std;

absorb::absorb() : attack("absorb", 20, 25, "grass") {}
acid::acid() : attack("acid", 0, 30, "poison") {}
acid_armor::acid_armor() : attack("acid armor", 0, 20, "poison") {}
agility::agility() : attack("agility", 0, 30, "psychic") {}
amnesia::amnesia() : attack("amnesia", 0, 20, "psychic") {}
aurora_beam::aurora_beam() : attack("aurora beam", 65, 20, "ice") {}
barrage::barrage() : attack("barrage", 15, 20, "normal") {}
barrier::barrier() : attack("barrier", 0, 20, "psychic") {}
bite::bite() : attack("bite", 60, 25, "dark") {}
blizzard::blizzard() : attack("blizzard", 110, 5, "ice") {}
body_slam::body_slam() : attack("body slam", 85, 15, "normal") {}
bone_club::bone_club() : attack("bone club", 65, 20, "ground") {}
bonemerang::bonemerang() : attack("bonemerang", 50, 10, "ground") {}
bubble::bubble() : attack("bubble", 40, 30, "water") {}
bubblebeam::bubblebeam() : attack("bubblebeam", 65, 20, "water") {}

dragon_rage::dragon_rage() : attack("dragon rage", 0, 10, "dragon") {}
splash::splash() : attack("splash", 0, 40, "normal") {}
struggle::struggle() : attack("struggle", 50, 1, "normal") {}
swift::swift() : attack("swift", 60, 20, "normal") {}

bool splash::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    cout << "But nothing happened!" << endl;
    return true;
  }
  cout << "There's no more PP left for this move!" << endl;
  return false;
}

bool swift::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool dragon_rage::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    o->takeDamage(40);
    return true;
  }
  return false;
}

bool struggle::usePP() { return 1; }

//struggle is a "typeless move", meaning it unaffected by type nor does it have STAB
//The pokemon that used it will also have recoil damage.
bool struggle::useMove(pokemon* self, pokemon* o) {
  srand(time(NULL));
  double modifier = ((((double)(rand() % 16)) / 100) + 0.85);
  unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		     ((double)self->getAtk() / (double)self->getDef()) * (double)getPower() + 2) * modifier;
  unsigned recoil = damage / 4;
  o->takeDamage(damage);
  self->takeDamage(recoil);
  return true;
}

attack::attack() : name("-"), m_type("NULL") {
  m_power = 0;
  max_pp = 0;
  base_pp = 0;
  m_pp = 0;
  pp_increase = 3;
}

attack::attack(string s, unsigned power, unsigned pp, string t) : name(s), m_type(t) {
  m_power = power;
  max_pp = pp;
  base_pp = pp;
  m_pp = pp;
  pp_increase = 3;
}
unsigned attack::getPower() { return m_power; }
type attack::getType() { return m_type; }
string attack::getTypeName() { return m_type.getName(); }
string attack::getName() { return name; }
unsigned attack::getPP() { return m_pp; }
unsigned attack::getMaxPP() { return max_pp; }

//if there is still PP, use the attack
bool attack::usePP() {
  if (m_pp > 0) {
    m_pp--; return 1;
  }
  return 0;
}

//Player either uses an item or heals, restores PP
void attack::heal_pp(unsigned n) {
  m_pp += n;
  if (m_pp > max_pp)
    m_pp = max_pp;
}

bool attack::add_maxpp() {
  if (pp_increase > 0) {
    pp_increase--;
    max_pp += (base_pp / 5);
    return 1;
  }
  return 0;
}

bool attack::usePhysicalMove(pokemon* self, pokemon* o)  {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == m_type || self->getBaseStats().getType2() == m_type)
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getAtk() / (double)self->getDef()) * (double)m_power + 2) * modifier;
    o->takeDamage(damage);
    if (type == 0) {
      cout << "It doesn't affect enemy " << o->getNickName() << "!" << endl;
    }
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool attack::useSpecialMove(pokemon* self, pokemon* o)  {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == m_type || self->getBaseStats().getType2() == m_type)
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getSplAtk() / (double)self->getSplDef()) * (double)m_power + 2) * modifier;
    o->takeDamage(damage);
    if (type == 0) {
      cout << "It doesn't affect enemy " << o->getNickName() << "!" << endl;
    }
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}
