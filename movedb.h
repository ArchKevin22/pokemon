#ifndef MOVEDB_H
#define MOVEDB_H

#include "typedb.h"
#include "pokemon.h"
#include <string>
using namespace std;

class pokemon;

class attack {
 public:
  attack();
  attack(string s, unsigned power, unsigned pp, string t);
  unsigned getPower();
  type getType();
  string getTypeName();
  string getName();
  unsigned getPP();
  unsigned getMaxPP();
  virtual void useMove(pokemon* o);
  virtual bool usePP();
  void heal_pp(unsigned n);
  bool add_maxpp();

 private:
  unsigned m_power;
  type m_type;
  string name;
  unsigned m_pp;
  unsigned base_pp;
  unsigned max_pp;
  unsigned pp_increase;
};

class struggle : public attack {
 public:
  struggle();
  virtual bool usePP();
  virtual void useMove(pokemon* self, pokemon* o);
};

#endif
