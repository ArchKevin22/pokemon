/* Pokemon class
 * The info about all the pokemons are in the Pokemon Database (pokedb.cpp)
 * The info about all the moves are in the Moves Database (movesdb.cpp)
 * All the types can be found in the Type Database (typedb.cpp)
 * All the info about base stats and formulas for calculating things are from Bulbapedia.
 *
 * TODO:
 * Add more conditions (confused, flinched, trapped, etc)
 * Actually make the status effects do something
 * Implement leveling up
 */

#include "pokemon.h"

/* For an pokemon, the stats are determined by IV's. Each IV is from 0 to 15.
 * iv[0] = Attack IV
 * iv[1] = Defense IV
 * iv[2] = Special IV for both Special Attack and Special Defense
 * iv[3] = Speed IV
 * The HP IV is taken from the LSB (least significant bit) of the other 4 IV's and concatenated into
 * a number from 0 to 15.
 *
 * The base stats are determined by the objectType stats.
 * 
 * Each pokemon will have a vector of 4 moves (which may or may not be empty. The type
 * declaration of each move will have a specific power and PP (power point).
 */

pokemon::pokemon(pokeStat base, unsigned iv[], 
		 unsigned level, unsigned status) : m_pokestat(base), m_nickname(m_pokestat.getName()) {
  m_level = level;
  m_atk = ((((base.getBaseAtk() + iv[0]) << 1) + (sqrt(iv[0] / 4)) * level) / 100) + 5;
  m_def = ((((base.getBaseDef() + iv[1]) << 1) + (sqrt(iv[1] / 4)) * level) / 100) + 5;
  m_splAtk = ((((base.getBaseSplAtk() + iv[2]) << 1) + (sqrt(iv[2] / 4)) * level) / 100) + 5;
  m_splDef = ((((base.getBaseSplDef() + iv[2]) << 1) + (sqrt(iv[2] / 4)) * level) / 100) + 5;
  m_speed = ((((base.getBaseSpeed() + iv[3]) << 1) + (sqrt(iv[3] / 4)) * level) / 100) + 5;
  unsigned hp_iv = ((iv[0] & 1) << 3) + ((iv[1] & 1) << 2) + ((iv[3] & 1) << 1) + (iv[2] & 1);
  m_hp = ((((base.getBaseHP() + hp_iv) << 1) + (sqrt(hp_iv) / 4)) * level / 100) + level + 10;
  max_hp = m_hp;
}

void pokemon::makeMoveset() {
  //make sure that a pokemon has at least two moves and that they
  //are the same type as the pokemon itself
}

void pokemon::setNickName(string s) {
  m_nickname = s;
}

string pokemon::getNickName() { return m_nickname; }
string pokemon::getName() { return m_pokestat.getName(); }
pokeStat pokemon::getBaseStats() { return m_pokestat; }
unsigned pokemon::getHP() { return m_hp; }
unsigned pokemon::getLevel() { return m_level; }
unsigned pokemon::getEXP() { return m_exp; }
unsigned pokemon::getAtk() { return m_atk; }
unsigned pokemon::getDef() { return m_def; }
unsigned pokemon::getSplAtk() { return m_splAtk; }
unsigned pokemon::getSplDef() { return m_splDef; }
unsigned pokemon::getSpeed() { return m_speed; }
unsigned pokemon::getStatus() { return m_status; }

void printMoves() {
  cout << moves[0].getName() << setw(15) << moves[1].getName() << endl;
  cout << moves[2].getName() << setw(15) << moves[3].getName() << endl;
}

//changes status
void pokemon::changeStatus(unsigned s) {
  m_status = s;
}

//returns new HP
void pokemon::takeDamage(unsigned dmg) {
  unsigned newHP = m_hp - dmg;
  newHP &= -(newHP <= m_hp);
  if (newHP == 0)
    changeStatus(FAINTED);
  m_hp = newHP;
}
/*
void pokemon::useAttack(attack m, pokemon* o)  {
  double type = (m.getType().effectiveness(o -> getBaseStats().getType1())) * m.getType().effectiveness(
    o -> getBaseStats.getType2());
  double stab = 1;
  if (getBaseStats().getType() == m.getType())
    stab += 0.5;
   double modifier = type * stab * ((((double)(rand() % 16)) / 100) + 0.85);
  unsigned damage = ((((m_level << 1) + 10) / 250) * (m_atk / m_def) * m.getPower() + 2) * modifier;
  o -> takeDamage(damage);
}
*/
void pokemon::heal_hp(unsigned h) {
  if (m_status == FAINTED) {
    cout << "You can't heal a fainted pokemon!" << endl;
    return;
  }
  m_hp += h;
  if (m_hp > max_hp)
    m_hp = max_hp;
}

//Completely heals the pokemon.
void pokemon::heal_all() {
  m_status = NONE;
  heal_hp(MAX_HP_POSSIBLE);
  //  for (int i = 0; i < moves.size(); i++)
  //moves[i].heal_pp(MAX_PP_POSSIBLE);
}

pokemon::~pokemon() {
  cout << m_nickname << " has been released to the wild." << endl;
}
