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
  attack* getMove(int i);
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
  bool changeAtkStage(int i);
  bool changeDefStage(int i);
  bool changeSplAtkStage(int i);
  bool changeSplDefStage(int i);
  bool changeSpeedStage(int i);
  bool changeAccStage(int i);
  bool changeEvasionStage(int i);
  void heal_hp(unsigned h);
  void heal_all();
  ~pokemon();
  
private:
  pokeStat m_pokestat;
  vector<attack*> moveList;
  string m_nickname;
  unsigned m_hp;
  unsigned max_hp;
  unsigned m_level;
  unsigned m_exp;
  unsigned m_atk;
  int m_atkStage;
  unsigned m_def;
  int m_defStage;
  unsigned m_splAtk;
  int m_splAtkStage;
  unsigned m_splDef;
  int m_splDefStage;
  unsigned m_speed;
  int m_speedStage;
  unsigned m_status;
  unsigned accuracy;
  int m_accStage;
  unsigned evasion;
  int m_evasionStage;
};

#endif
