#ifndef POKEDB_H
#define POKEDB_H

#include "typedb.h"
#include <string>
using namespace std;

class type;

class pokeStat {
 public:
  pokeStat(unsigned n, string nm, unsigned h, unsigned a, 
	   unsigned def, unsigned splatk, unsigned spldef, unsigned speed, string t1, string t2, string d);
  unsigned getNum();
  string getDesc();
  string getName();
  type getType1();
  type getType2();
  unsigned getBaseHP();
  unsigned getBaseAtk();
  unsigned getBaseDef();
  unsigned getBaseSplAtk();
  unsigned getBaseSplDef();
  unsigned getBaseSpeed();
  
 private:
  string desc;
  string name;
  unsigned object_id;
  type m_type1;
  type m_type2;
  unsigned base_hp;
  unsigned base_atk;
  unsigned base_def;
  unsigned base_splatk;
  unsigned base_spldef;
  unsigned base_speed;
};

class bulbasaur : public pokeStat { public: bulbasaur(); };
class ivysaur : public pokeStat { public: ivysaur(); };
class venusaur : public pokeStat { public: venusaur(); };
class charmander : public pokeStat { public: charmander(); };
class charmeleon : public pokeStat { public: charmeleon(); };
class charizard : public pokeStat { public: charizard(); };
class squirtle : public pokeStat { public: squirtle(); };
class wartortle : public pokeStat { public: wartortle(); };
class blastoise : public pokeStat { public: blastoise(); };

#endif
