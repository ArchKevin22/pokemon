#ifndef MOVEDB_H
#define MOVEDB_H

#include "typedb.h"
#include <string>
using namespace std;

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
  bool useMove();
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

class ember : public attack {
 public:
  ember();
};

#endif
