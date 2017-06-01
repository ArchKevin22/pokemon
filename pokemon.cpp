#include "pokemon.h"

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
  m_status = none;
  accuracy = 100;
  evasion = 100;
}

void pokemon::makeMoveset() {
  int a = h.getSize();
  int move1 = rand() % a + 1;
  int move2 = rand() % a + 1;
  while(move2 == move1)
    move2 = rand() % a + 1;
  int move3 = rand() % a + 1;
  while(move3 == move2 || move3 == move1)
    move3 = rand() % a + 1;
  int move4 = rand() % a + 1;
  while(move4 == move3 || move4 == move2 || move4 == move1)
    move4 = rand() % a + 1;
  moveList[0] = h.getEntryAt(move1);
  moveList[1] = h.getEntryAt(move2);
  moveList[2] = h.getEntryAt(move3);
  moveList[3] = h.getEntryAt(move4);
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
Status pokemon::getStatus() { return m_status; }

void pokemon::printMoves() {
  cout << "Movelist:" << endl;
  cout << "1. " << moveList[0]->getName() << " PP: " << moveList[0]->getPP() << '/' << moveList[0]->getMaxPP() << endl;
  cout << "2. " << moveList[1]->getName() << " PP: " << moveList[1]->getPP() << '/' << moveList[1]->getMaxPP() << endl;
  cout << "3. " << moveList[2]->getName() << " PP: " << moveList[2]->getPP() << '/' << moveList[2]->getMaxPP() << endl;
  cout << "4. " << moveList[3]->getName() << " PP: " << moveList[3]->getPP() << '/' << moveList[3]->getMaxPP() << endl;
}

//changes status
bool pokemon::changeStatus(Status s) {
  if (m_status != s) {
    m_status = s;
    return true;
  }
  return false;
}

void pokemon::calcStats() {
  double atkmod = 100 + (abs(m_atkStage) * 50);
  double defmod = 100 + (abs(m_defStage) * 50);
  double splAtkmod = 100 + (abs(m_splAtkStage) * 50);
  double splDefmod = 100 + (abs(m_splDefStage) * 50);
  double speedmod = 100 + (abs(m_speedStage) * 50);
  if (m_atkStage < 0)
    atkmod = 100 / atkmod;
  else
    atkmod /= 100;
  if (m_defStage < 0)
    defmod = 100 / defmod;
  else
    defmod /= 100;
  if (m_splAtkStage < 0)
    splAtkmod = 100 / splAtkmod;
  else
    splAtkmod /= 100;
  if (m_splDefStage < 0)
    splDefmod = 100 / splDefmod;
  else
    splDefmod /= 100;
  if (m_speedStage < 0)
    speedmod = 100 / speedmod;
  else
    speedmod /= 100;
  m_atk = m_baseAtk * atkmod;
  m_def = m_baseDef * defmod;
  m_splAtk = m_baseSplAtk * splAtkmod;
  m_splDef = m_baseSplDef * splDefmod;
  m_speed = m_baseSpeed * speedmod;
}

//returns new HP
bool pokemon::takeDamage(unsigned dmg) {
  bool alive = true;
  int newHP = m_hp - dmg;
  newHP &= -(newHP <= m_hp);
   if (newHP <= 0) {
    changeStatus(fainted);
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

bool pokemon::changeSpeedStage(int i) {
  if (m_speedStage + i > 6 || m_speedStage + i < -6)
    return false;
  m_speedStage + i;
  return true;
}

void pokemon::heal_hp(unsigned h) {
  if (m_status == fainted) {
    cout << "You can't heal a fainted pokemon!" << endl;
    return;
  }
  m_hp += h;
  if (m_hp > max_hp)
    m_hp = max_hp;
}

//Completely heals the pokemon.
void pokemon::heal_all() {
  m_status = none;
  heal_hp(MAX_HP_POSSIBLE);
  for (int i = 0; i < 4; i++)
    moveList[i]->heal_pp(MAX_PP_POSSIBLE);
}

pokemon::~pokemon() {
  cout << m_nickname << " has been released to the wild." << endl;
}
