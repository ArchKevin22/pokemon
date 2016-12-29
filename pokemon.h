#ifndef POKEMON_H
#define POKEMON_H

#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include "pokedb.h"
#include "typedb.h"
#include "movedb.h"
using namespace std;

class pokeStat;
class type;
class attack;

const int MAX_HP_POSSIBLE = 714;
const int MAX_PP_POSSIBLE = 56;

//Status conditions
const char NONE = 0;
const char POISONED = 1;
const char ASLEEP = 2;
const char BURNED = 3;
const char FROZEN = 4;
const char PARALYZED = 5;
const char FAINTED = 6;

class pokemon {
 public:
  pokemon(pokeStat base, unsigned iv[], unsigned level);
  void makeMoveset();
  void printMoves();
  void setNickName(string s);
  string getNickName();
  string getName();
  pokeStat getBaseStats();
  unsigned getHP();
  unsigned getLevel();
  unsigned getEXP();
  unsigned getAtk();
  unsigned getDef();
  unsigned getSplAtk();
  unsigned getSplDef();
  unsigned getSpeed();
  unsigned getStatus();
  bool changeStatus(unsigned s);
  bool takeDamage(unsigned dmg);
  bool raiseAtk(unsigned i);
  bool lowerAtk(unsigned i);
  bool raiseDef(unsigned i);
  bool lowerDef(unsigned i);
  bool raiseSplAtk(unsigned i);
  bool lowerSplAtk(unsigned i);
  bool raiseSplDef(unsigned i);
  bool lowerSplDef(unsigned i);
  bool raiseSpeed(unsigned i);
  bool lowerSpeed(unsigned i);
  bool raiseAccuracy(unsigned i);
  bool lowerAccuracy(unsigned i);
  bool raiseEvasion(unsigned i);
  bool lowerEvasion(unsigned i);
  void heal_hp(unsigned h);
  void heal_all();
  ~pokemon();
  
private:
  pokeStat m_pokestat;
  vector<attack> moveList;
  string m_nickname;
  unsigned m_hp;
  unsigned max_hp;
  unsigned m_level;
  unsigned m_exp;
  unsigned m_baseAtk;
  unsigned m_atk;
  unsigned m_baseDef;
  unsigned m_def;
  unsigned m_baseSplAtk;
  unsigned m_splAtk;
  unsigned m_baseSplDef;
  unsigned m_splDef;
  unsigned m_baseSpeed;
  unsigned m_speed;
  unsigned m_status;
  unsigned accuracy;
  unsigned evasion;
};

#endif
