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
		 unsigned level)
  : m_pokestat(base), m_nickname(m_pokestat.getName()) {
  m_level = level;
  m_baseAtk = ((((base.getBaseAtk() + iv[0]) << 1) + (sqrt(iv[0] / 4)) * level) / 100) + 5;
  m_atk = m_baseAtk;
  m_baseDef = ((((base.getBaseDef() + iv[1]) << 1) + (sqrt(iv[1] / 4)) * level) / 100) + 5;
  m_def = m_baseDef;
  m_baseSplAtk = ((((base.getBaseSplAtk() + iv[2]) << 1) + (sqrt(iv[2] / 4)) * level) / 100) + 5;
  m_splAtk = m_baseSplAtk;
  m_baseSplDef = ((((base.getBaseSplDef() + iv[2]) << 1) + (sqrt(iv[2] / 4)) * level) / 100) + 5;
  m_splDef = m_baseSplDef;
  m_baseSpeed = ((((base.getBaseSpeed() + iv[3]) << 1) + (sqrt(iv[3] / 4)) * level) / 100) + 5;
  m_speed = m_baseSpeed;
  unsigned hp_iv = ((iv[0] & 1) << 3) + ((iv[1] & 1) << 2) + ((iv[3] & 1) << 1) + (iv[2] & 1);
  m_hp = ((((base.getBaseHP() + hp_iv) << 1) + (sqrt(hp_iv) / 4)) * level / 100) + level + 10;
  max_hp = m_hp;
  m_status = 0;
  accuracy = 100;
  evasion = 100;
  makeMoveset();
}

void pokemon::makeMoveset() {
  /* TODO: generate different moves for each pokemon
   * vector<attack> moves = getBaseStats().getMovePool();
   * If there are less than 4 learnable moves, make the remaining ints
   * 0, where 0 is the null move. */
  //int move1 = random int
  //int move2 = random int
  //int move3 = random int
  //int move4 = random int
  moveList.push_back(new struggle());
  moveList.push_back(new swift());
  moveList.push_back(new splash());
  moveList.push_back(new dragon_rage());
}

attack* pokemon::getMove(int i) {
  return moveList[i-1];
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

void pokemon::printMoves() {
  cout << moveList[0]->getName() << " PP: " << moveList[0]->getPP() << '/' << moveList[0]->getMaxPP() << endl;
  cout << moveList[1]->getName() << " PP: " << moveList[1]->getPP() << '/' << moveList[1]->getMaxPP() << endl;
  cout << moveList[2]->getName() << " PP: " << moveList[2]->getPP() << '/' << moveList[2]->getMaxPP() << endl;
  cout << moveList[3]->getName() << " PP: " << moveList[3]->getPP() << '/' << moveList[3]->getMaxPP() << endl;
}

//changes status
bool pokemon::changeStatus(unsigned s) {
  if (m_status != s) {
    m_status = s;
    return 1;
  }
  return 0;
}

//returns new HP
bool pokemon::takeDamage(unsigned dmg) {
  bool alive = true;
  int newHP = m_hp - dmg;
  newHP &= -(newHP <= m_hp);
   if (newHP <= 0) {
    changeStatus(FAINTED);
    alive = false;
  }
   m_hp = (unsigned)newHP;
  return alive;
}

bool pokemon::changeAtkStage(int i) {
  if (m_atkStage + i > 6 || m_atkStage + i < -6)
    return false;
  m_atkStage + i;
  return true;
}

bool pokemon::changeDefStage(int i) {
  if (m_defStage + i > 6 || m_defStage + i < -6)
    return false;
  m_defStage + i;
  return true;
}

bool pokemon::changeSplAtkStage(int i) {
  if (m_splAtkStage + i > 6 || m_splAtkStage + i < -6)
    return false;
  m_splAtkStage + i;
  return true;
}

bool pokemon::changeSplDefStage(int i) {
  if (m_splDefStage + i > 6 || m_splDefStage + i < -6)
    return false;
  m_splDefStage + i;
  return true;
}

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
  for (int i = 0; i < moveList.size(); i++)
    moveList[i]->heal_pp(MAX_PP_POSSIBLE);
}

pokemon::~pokemon() {
  for (int i = 0; i < 4; i++)
    delete moveList[i];
  cout << m_nickname << " has been released to the wild." << endl;
}
