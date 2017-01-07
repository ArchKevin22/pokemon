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
  virtual bool useMove(pokemon* self, pokemon* o) = 0;
  virtual bool usePhysicalMove(pokemon* self, pokemon* o);  
  virtual bool useSpecialMove(pokemon* self, pokemon* o);
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

struct struggle : public attack {
  struggle();
  virtual bool usePP();
};

struct swift : public attack {
  swift();
};

struct splash : public attack {
  splash();
};

struct dragon_rage : public attack {
  dragon_rage();
};

struct absorb : public attack {
  absorb();
};

struct acid : public attack {
  acid();
};

struct acid_armor : public attack {
  acid_armor();
};

struct agility : public attack {
  agility();
};

struct amnesia : public attack {
  amnesia();
};

struct aurora_beam : public attack {
  aurora_beam();
};

struct barrage : public attack {
  barrage();
};

struct barrier : public attack {
  barrier();
};

struct blizzard : public attack {
  blizzard();
};

struct body_slam : public attack {
  body_slam();
};

struct bone_club : public attack {
  bone_club();
};

struct bonemerang : public attack {
  bonemerang();
};

struct bubble : public attack {
  bubble();
};

struct bubblebeam : public attack {
  bubblebeam();
};

#endif
