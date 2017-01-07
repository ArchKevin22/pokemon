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
  virtual bool useMove(pokemon* self, pokemon* o);
  virtual bool usePP();
};

struct swift : public attack { swift();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct splash : public attack { splash();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct dragon_rage : public attack { dragon_rage();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct absorb : public attack { absorb();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct acid : public attack { acid();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct acid_armor : public attack { acid_armor();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct agility : public attack { agility();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct amnesia : public attack { amnesia();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct aurora_beam : public attack { aurora_beam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct barrage : public attack { barrage();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct barrier : public attack { barrier();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct bite : public attack { bite();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct blizzard : public attack { blizzard();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct body_slam : public attack { body_slam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct bone_club : public attack { bone_club();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct bonemerang : public attack { bonemerang();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct bubble : public attack { bubble();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct bubblebeam : public attack { bubblebeam();
  virtual bool useMove(pokemon* self, pokemon* o); };

#endif
