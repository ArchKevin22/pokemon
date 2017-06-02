#include "movedb.h"
#include <ctime>
#include <iostream>
using namespace std;

absorb::absorb() : attack("absorb", 20, 25, "grass") {}
acid::acid() : attack("acid", 40, 30, "poison") {}
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

bool acid::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, def, 33, you, down, -1);
}

bool acid_armor::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    return alterStat(self, def, 100, up, 2);
  }
  cout << "There's no PP left for this move!" << endl;
  return false;
}

bool agility::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    return alterStat(self, sp, 100, up, 2);
  }
  cout << "There's no PP left for this move!" << endl;
  return false;
}

bool ice_beam::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, frz, 10, you);
}
bool ice_punch::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, physical, frz, 10, you);
}

bool leech_life::useMove(pokemon* self, pokemon* o) {
  unsigned healAmt = 0;
  if (useRecoilorHealMove(self, o, special, healAmt, 2)) {
    self->heal_hp(healAmt);
    return true;
  }

  else {
    return false;
  }
}

bool earthquake::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, physical);
}

bool drill_peck::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, physical);
}

bool egg_bomb::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, physical);
}

bool gust::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, special);
}

bool horn_attack::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, physical);
}

bool hydro_pump::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, special);
}

bool hyper_beam::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, special);
}

bool hyper_fang::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, physical, fln, 10, you);
}

bool headbutt::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, physical, fln, 10, you);
}

bool ember::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, brn, 10, you);
}

bool fire_punch::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, physical, brn, 10, you);
}

bool flamethrower::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, brn, 10, you);
}


bool fire_blast::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, brn, 10, you);
}

bool explosion::useMove(pokemon* self, pokemon* o) {
  if (useAttackMove(self, o, physical)) {
    self->takeDamage(9999);
    return true;
  }
  return false;
}

bool cut::useMove(pokemon* self, pokemon* o) {
  return useAttackMove(self, o, physical);
}

bool double_edge::useMove(pokemon* self, pokemon* o) {
  unsigned recoil = 0;
  if (useRecoilorHealMove(self, o, physical, recoil, 4)) {
    self->takeDamage(recoil);
    return true;
  }
  else {
    return false;
  }
}

bool barrage::useMove(pokemon* self, pokemon* o) {
  return useMultipleMove(self, o, physical, 2, 5);
}

bool barrier::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    return alterStat(self, def, 100, up, 2);
  }
  cout << "There's no PP left for this move!" << endl;
  return false;
}

bool blizzard::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, frz, 10, you);
}

bool bone_club::useMove(pokemon* self, pokemon* o) {
    return useStatAlteringMove(self, o, physical, fln, 10, you);
}

bool bonemerang::useMove(pokemon* self, pokemon* o) {
  return useMultipleMove(self, o, physical, 2, 2);
}

bool bubble::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, sp, 10, you, down, -1);
}

bool bubblebeam::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, sp, 10, you, down, -1);
}

bool body_slam::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, prz, 10, you);
}

bool bite::useMove(pokemon* self, pokemon* o) {
    return useStatAlteringMove(self, o, physical, fln, 10, you);
}

bool aurora_beam::useMove(pokemon* self, pokemon* o) {
  return useStatAlteringMove(self, o, special, atk, 10, you, down, -1);
}

bool amnesia::useMove(pokemon* self, pokemon* o) {
  if (usePP()) {
    return alterStat(self, sd, 100, up, 2);
  }
  cout << "There's no PP left for this move!" << endl;
  return false;
}


bool absorb::useMove(pokemon* self, pokemon* o) {
  unsigned healAmt = 0;
  if (useRecoilorHealMove(self, o, special, healAmt, 2)) {
    self->heal_hp(healAmt);
    return true;
  }

  else {
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
  return useAttackMove(self, o, physical);
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
  double e;
  unsigned damage = getDamage(self, o, physical, e);
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

unsigned attack::getDamage(pokemon* self, pokemon* o, category c, double& effectiveness) {
  unsigned damage;
  effectiveness = (getType().effectiveness(o->getBaseStats().getType1().getName())) *
    getType().effectiveness(o->getBaseStats().getType2().getName());
  double stab = 1;
  if (self->getBaseStats().getType1() == m_type || self->getBaseStats().getType2() == m_type)
    stab += 0.5;
  srand(time(NULL));
  double modifier = effectiveness * stab * ((((double)(rand() % 16)) / 100) + 0.85);
  if (c == physical) {
    damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
          ((double)self->getAtk() / (double)self->getDef()) * (double)m_power + 2) * modifier;
  }
  else {
    damage = ((((double)(self->getLevel() << 1) + 10) / 250) *
           ((double)self->getSplAtk() / (double)self->getSplDef()) * (double)m_power + 2) * modifier;
  }
  return damage;
}

void attack::printEffectiveness(double effectiveness, pokemon* o) {
  if (effectiveness == 0) {
    cout << "It doesn't affect enemy " << o->getNickName() << "!" << endl;
  }
  else if (effectiveness == 2) {
    cout << "It's super effective!" << endl;
  }
  else if (effectiveness == 0.5) {
    cout << "It's not very effective..." << endl;
  }
}

bool attack::useAttackMove(pokemon* self, pokemon* o, category c)  {
  if (usePP()) {
    double e;
    unsigned damage = getDamage(self, o, c, e);
    o->takeDamage(damage);
    printEffectiveness(e, o);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool attack::useRecoilorHealMove(pokemon* self, pokemon* o, category c, unsigned& amt, unsigned fraction) {
  if (usePP()) {
    double e;
    unsigned damage = getDamage(self, o, c, e);
    amt = ceil(damage / fraction);
    o->takeDamage(damage);
    printEffectiveness(e, o);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool attack::useStatAlteringMove(pokemon* self, pokemon* o, category c, battleStat s, prob p, whichPokemon w, upOrDown u, int amt) {
  if (usePP()) {
    double e;
    unsigned damage = getDamage(self, o, c, e);
    o->takeDamage(damage);
    printEffectiveness(e, o);
    if (e != 0) {
      bool statChanged = ((w == me) ? alterStat(self, s, p, u, amt) : alterStat(o, s, p, u, amt));
    }
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool attack::useStatAlteringMove(pokemon* self, pokemon* o, category c, Status s, prob p, whichPokemon w) {
  if (usePP()) {
    double e;
    unsigned damage = getDamage(self, o, c, e);
    o->takeDamage(damage);
    printEffectiveness(e, o);
    if (e != 0) {
      bool statusChanged = ((w == me) ? inflictStatusEffect(self, s, p) : inflictStatusEffect(o, s, p));
    }
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}

bool attack::alterStat(pokemon* affected, battleStat s, prob p, upOrDown u, int amt) {
  srand(time(NULL));
  int a = random_int_in_range(1, 100);
  if (a <= p) {
    switch(s) {
      case atk:
      affected->changeAtkStage(amt);
      break;
      case def:
      affected->changeDefStage(amt);
      break;
      case sa:
      affected->changeSplAtkStage(amt);
      break;
      case sd:
      affected->changeSplDefStage(amt);
      break;
      case sp:
      affected->changeSpeedStage(amt);
      break;
      default:
      break;
    }
    return true;
  }
  return false;
}

bool attack::inflictStatusEffect(pokemon* affected, Status s, prob p) {
  srand(time(NULL));
  int a = random_int_in_range(1, 100);
  if (a <= p) {
    affected->changeStatus(s);
    return true;
  }
  return false;
}

bool attack::useMultipleMove(pokemon* self, pokemon* o, category c, int min, int max) {
  if (usePP()) {
    int numTimes = random_int_in_range(min, max);
    double e;
    for (int i = 0; i < numTimes; i++) {
      unsigned damage = getDamage(self, o, c, e);
      o->takeDamage(damage);
    }
    printEffectiveness(e, o);
    return true;
  }
  else {
    cout << "There's no PP left for this move!" << endl;
    return false;
  }
}
