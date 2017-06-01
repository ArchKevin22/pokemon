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
#include "movedex.h"
#include "movedb.h"
#include "utils.h"
using namespace std;

class pokeStat;
class type;
class attack;

const int MAX_HP_POSSIBLE = 714;
const int MAX_PP_POSSIBLE = 56;


class pokemon {
 public:
  pokemon(pokeStat base, unsigned iv[], unsigned level);
  void makeMoveset();
  attack* getMove(int i);
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
  Status getStatus();
  bool changeStatus(Status s);
  bool takeDamage(unsigned dmg);
  bool changeAtkStage(int i);
  bool changeDefStage(int i);
  bool changeSplAtkStage(int i);
  bool changeSplDefStage(int i);
  bool changeSpeedStage(int i);
  bool changeAccStage(int i);
  bool changeEvasionStage(int i);
  void calcStats();
  //void checkStatusBeforeTurn();
  //void checkStatusAfterTurn();
  void heal_hp(unsigned h);
  void heal_all();
  ~pokemon();

private:
  movedex h;
  pokeStat m_pokestat;
  attack* moveList[4];
  string m_nickname;
  unsigned m_hp;
  unsigned max_hp;
  unsigned m_level;
  unsigned m_exp;
  unsigned m_baseAtk;
  unsigned m_baseDef;
  unsigned m_baseSplAtk;
  unsigned m_baseSplDef;
  unsigned m_baseSpeed;
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
  Status m_status;
  unsigned accuracy;
  int m_accStage;
  unsigned evasion;
  int m_evasionStage;
};

#endif
