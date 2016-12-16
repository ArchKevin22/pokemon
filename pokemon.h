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
  pokemon(pokeStat base, unsigned iv[], unsigned level, unsigned status);
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
  void changeStatus(unsigned s);
  void takeDamage(unsigned dmg);
  //void useAttack(attack m, pokemon* o);
  void heal_hp(unsigned h);
  void heal_all();
  ~pokemon();
  
private:
 pokeStat m_pokestat;
 attack moves[4];
 string m_nickname;
 unsigned m_hp;
 unsigned max_hp;
 unsigned m_level;
 unsigned m_exp;
 unsigned m_atk;
 unsigned m_def;
 unsigned m_splAtk;
 unsigned m_splDef;
 unsigned m_speed;
 unsigned m_status;
};

#endif
