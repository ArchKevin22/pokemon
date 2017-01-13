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
acid::acid() : attack("acid", 40, 30, "poison") {}
//acid_armor::acid_armor() : attack("acid armor", 0, 20, "poison") {}
//agility::agility() : attack("agility", 0, 30, "psychic") {}
//amnesia::amnesia() : attack("amnesia", 0, 20, "psychic") {}
aurora_beam::aurora_beam() : attack("aurora beam", 65, 20, "ice") {}
barrage::barrage() : attack("barrage", 15, 20, "normal") {}
//barrier::barrier() : attack("barrier", 0, 20, "psychic") {}
bite::bite() : attack("bite", 60, 25, "dark") {}
blizzard::blizzard() : attack("blizzard", 110, 5, "ice") {}
body_slam::body_slam() : attack("body slam", 85, 15, "normal") {}
bone_club::bone_club() : attack("bone club", 65, 20, "ground") {}
bonemerang::bonemerang() : attack("bonemerang", 50, 10, "ground") {}
bubble::bubble() : attack("bubble", 40, 30, "water") {}
bubblebeam::bubblebeam() : attack("bubblebeam", 65, 20, "water") {}

cut::cut() : attack("cut", 50, 30, "normal") {}
double_edge::double_edge() : attack("double-edge", 100, 15, "normal") {}
drill_peck::drill_peck() : attack("drill peck", 80, 20, "flying") {}
earthquake::earthquake() : attack("earthquake", 100, 10, "ground") {}
egg_bomb::egg_bomb() : attack("egg bomb", 100, 10, "normal") {}
ember::ember() : attack("ember", 40, 25, "fire") {}
explosion::explosion() : attack("explosion", 250, 5, "normal") {}
fire_blast::fire_blast() : attack("fire blast", 120, 5, "fire") {}
fire_punch::fire_punch() : attack("fire punch", 75, 15, "fire") {}
flamethrower::flamethrower() : attack("flamethrower", 95, 15, "fire") {}
gust::gust() : attack("gust", 40, 35, "flying") {}
headbutt::headbutt() : attack("headbutt", 70, 15, "normal") {}

horn_attack::horn_attack() : attack("horn attack", 65, 25, "normal") {}
hydro_pump::hydro_pump() : attack("hydro pump", 120, 5, "water") {}
hyper_beam::hyper_beam() : attack("hyper beam", 150, 5, "normal") {}
hyper_fang::hyper_fang() : attack("hyper fang", 80, 15, "normal") {}
ice_beam::ice_beam() : attack("ice beam", 90, 10, "ice") {}
ice_punch::ice_punch() : attack("ice punch", 75, 15, "ice") {}
leech_life::leech_life() : attack("leech life", 20, 15, "bug") {}
/*lick::lick() : attack("lick", 20, 30, "ghost") {}
mega_drain::mega_drain() : attack("mega drain", 40, 10, "grass") {}
mega_kick::mega_kick() : attack("mega kick", 120, 5, "normal") {}
mega_punch::mega_punch() : attack("mega punch", 80, 20, "normal") {}
night_shade::night_shade() : attack("night shade", 0, 15, "ghost") {}
pay_day::pay_day() : attack("pay day", 40, 20, "normal") {}
peck::peck() : attack("peck", 35, 35, "flying") {}
poison_sting::poison_sting() : attack("poison sting", 15, 35, "poison") {}
pound::pound() : attack("pound", 40, 35, "normal") {}
psybeam::psybeam() : attack("psybeam", 65, 20, "psychic") {}
psychic::psychic() : attack("psychick", 90, 10, "psychic") {}
razor_leaf::razor_leaf() : attack("razor leaf", 55, 25, "grass") {}
rock_slide::rock_slide() : attack("rock slide", 75, 10, "rock") {}
rock_throw::rock_throw() : attack("rock throw", 50, 15, "rock") {}
rolling_kick::rolling_kick() : attack("rolling kick", 60, 15, "fighting") {}
scratch::scratch() : attack("scratch", 40, 35, "normal") {}
seismic_toss::seismic_toss() : attack("seismic toss", 0, 20, "fighting") {}
self_destruct::self_destruct() : attack("self-destruct", 200, 5, "normal") {}
skull_bash::skull_bash() : attack("skull bash", 100, 15, "normal") {}
sky_attack::sky_attack() : attack("sky attack", 140, 5, "flying") {}
slam::slam() : attack("slam", 80, 20, "normal") {}
slash::slash() : attack("slash", 70, 20, "normal") {}
sludge::sludge() : attack("sludge", 65, 20, "poison") {}
smog::smog() : attack("smog", 30, 20, "poison") {}
solar_beam::solar_beam() : attack("solar beam", 120, 10, "grass") {}
sonic_boom::sonic_boom() : attack("sonic boom", 0, 20, "normal") {}
stomp::stomp() : attack("stomp", 65, 20, "normal") {}
strength::strength() : attack("strength", 80, 15, "normal") {}
submission::submission() : attack("submission", 80, 20, "fighting") {}
super_fang::super_fang() : attack("super fang", 0, 10, "normal") {}
surf::surf() : attack("surf", 90, 15, "water") {}
tackle::tackle() : attack("tackle", 35, 35, "normal") {}
take_down::take_down() : attack("take down", 90, 20, "normal") {}
thunder::thunder() : attack("thunder", 120, 10, "electric") {}
thunderpunch::thunderpunch() : attack("thunderpunch", 75, 15, "electric") {}
thundershock::thundershock() : attack("thundershock", 40, 30, "electric") {}
thunderbolt::thunderbolt() : attack("thunderbolt", 90, 15, "electric") {}
tri_attack::tri_attack() : attack("tri attack", 80, 10, "normal") {}
vicegrip::vicegrip() : attack("vicegrip", 55, 30, "normal") {}
vine_whip::vine_whip() : attack("vine whip", 35, 10, "grass") {}
water_gun::water_gun() : attack("water gun", 40, 25, "water") {}
waterfall::waterfall() : attack("waterfall", 80, 15, "water") {}
wing_attack::wing_attack() : attack("wing attack", 35, 35, "flying") {}
*/
dragon_rage::dragon_rage() : attack("dragon rage", 0, 10, "dragon") {}
splash::splash() : attack("splash", 0, 40, "normal") {}
struggle::struggle() : attack("struggle", 50, 1, "normal") {}
swift::swift() : attack("swift", 60, 20, "normal") {}

bool ice_beam::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    //implement freezing
    return true;
  }
  return false;
}
bool ice_punch::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    //implement freezing
    return true;
  }
  return false;
}

bool leech_life::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == getType() || self->getBaseStats().getType2() == getType())
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getSplAtk() / (double)self->getSplDef()) * (double)getPower() + 2) * modifier;
    unsigned healAmt = ceil(damage / 2);
    o->takeDamage(damage);
    self->heal_hp(healAmt);
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

bool earthquake::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool drill_peck::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool egg_bomb::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool gust::useMove(pokemon* self, pokemon* o) {
  return useSpecialMove(self, o);
}

bool horn_attack::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool hydro_pump::useMove(pokemon* self, pokemon* o) {
  return useSpecialMove(self, o);
}

bool hyper_beam::useMove(pokemon* self, pokemon* o) {
  return useSpecialMove(self, o);
}

bool hyper_fang::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    //TODO: implement flinch
    return true;
  }
  return false;
}

bool headbutt::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    //TODO: implement flinch
    return true;
  }
  return false;  
}

bool ember::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeStatus(3);
    return true;
  }
  return false;
}

bool fire_punch::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeStatus(3);
    return true;
  }
  return false;
}

bool flamethrower::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeStatus(3);
    return true;
  }
  return false;
}


bool fire_blast::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeStatus(3);
    return true;
  }
  return false;
}

bool explosion::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    self->takeDamage(9999);
    return true;
  }
  return false;
}

bool cut::useMove(pokemon* self, pokemon* o) {
  return usePhysicalMove(self, o);
}

bool double_edge::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == getType() || self->getBaseStats().getType2() == getType())
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getAtk() / (double)self->getDef()) * (double)getPower() + 2) * modifier;
    unsigned recoil = damage / 4;
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

bool barrage::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    srand(time(NULL));
    int a = rand() % 1000 + 1;
    int c;
    if (a <= 375)
      c = 2;
    else if (a <= 750)
      c = 3;
    else if (a <= 875)
      c = 4;
    else
      c = 5;
    for (int i = 0; i < c; i++) {
      double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
	getType().effectiveness(o->getBaseStats().getType2().getName());
      double stab = 1;
      if (self->getBaseStats().getType1() == getType() || self->getBaseStats().getType2() == getType())
	stab += 0.5;
      srand(time(NULL));
      double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
      unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
			 ((double)self->getAtk() / (double)self->getDef()) * (double)getPower() + 2) * modifier;
      o->takeDamage(damage);
      if (type == 0) {
	cout << "It doesn't affect enemy " << o->getNickName() << "!" << endl;
      }
    }
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

/*bool barrier::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    self->changeDefStage(2);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}
*/
bool blizzard::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeStatus(4);
    return true;
  }
  return false;
}

bool bone_club::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    //TODO: implement flinch
    return true;
  }
  return false;
}

bool bonemerang::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == getType() || self->getBaseStats().getType2() == getType())
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getAtk() / (double)self->getDef()) * (double)getPower() + 2) * modifier;
    o->takeDamage(damage);
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

bool bubble::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeSpeedStage(-1);
    return true;
  }
  return false;
}

bool bubblebeam::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeSpeedStage(-1);
    return true;
  }
  return false;
}

bool body_slam::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a <= 3)
      o->changeStatus(5);
    return true;
  }
  return false;
}

bool bite::useMove(pokemon* self, pokemon* o) {
  if (usePhysicalMove(self, o)) {
    //TODO: implement flinch
    return true;
  }
  return false;
}

bool aurora_beam::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeAtkStage(-1);
    return true;
  }
  return false;
}
 
/*bool amnesia::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    self->changeSplDefStage(2);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool agility::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    self->changeSpeedStage(2);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool acid_armor::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    self->changeDefStage(2);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}*/

bool acid::useMove(pokemon* self, pokemon* o) {
  if (useSpecialMove(self, o)) {
    srand(time(NULL));
    int a = rand() % 10 + 1;
    if (a == 1)
      o->changeDefStage(-1);
    return true;
  }
  return false;
}

bool absorb::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    double type = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
      getType().effectiveness(o->getBaseStats().getType2().getName());
    double stab = 1;
    if (self->getBaseStats().getType1() == getType() || self->getBaseStats().getType2() == getType())
      stab += 0.5;
    srand(time(NULL));
    double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
    unsigned damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
		       ((double)self->getSplAtk() / (double)self->getSplDef()) * (double)getPower() + 2) * modifier;
    unsigned healAmt = ceil(damage / 2);
    o->takeDamage(damage);
    self->heal_hp(healAmt);
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
