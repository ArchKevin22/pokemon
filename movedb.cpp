/* Moves Database 
 * Each move has a power, type, and PP.
 * Max PP can be increased up to 3 times.
 * There may be moves that affect the stats of the Pokemon.
 *   
 */

#include "movedb.h"

struggle::struggle() : attack("struggle", 50, 1, "normal") {}

bool struggle::usePP() { return 1; }

//struggle is a "typeless move", meaning it unaffected by type nor does it have STAB
//The pokemon that used it will also have recoil damage.
void struggle::useMove(pokemon* self, pokemon* o) {
  double modifier = ((((double)(rand() % 16)) / 100) + 0.85);
  unsigned damage = ((((o->getLevel() << 1) + 10) / 250) * (o->getAtk() / o->getDef()) * getPower() + 2) * modifier;
  unsigned recoil = damage / 4;
  o->takeDamage(damage);
  self->takeDamage(recoil);
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

void attack::useMove(pokemon* o)  {
  double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
    getType().effectiveness(o->getBaseStats().getType2().getName());
  double stab = 1;
  if (o->getBaseStats().getType1() == getType())
    stab += 0.5;
  double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
  unsigned damage = ((((o->getLevel() << 1) + 10) / 250) * (o->getAtk() / o->getDef()) * getPower() + 2) * modifier;
  o->takeDamage(damage);
}
