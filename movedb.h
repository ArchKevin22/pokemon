/* Moves Database
 * Each move has a power, type, and PP.
 * Max PP can be increased up to 3 times.
 * There may be moves that affect the stats of the Pokemon.
 *
 */

#ifndef MOVEDB_H
#define MOVEDB_H

#include "typedb.h"
#include "pokemon.h"
#include "utils.h"
#include <string>
using namespace std;

enum battleStat {atk, def, sa, sd, sp};
enum whichPokemon {me, you};
enum upOrDown {up, down};
enum category {physical, special};
typedef int prob;


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
  unsigned getDamage(pokemon* self, pokemon* o, category c, double& t);
  void printEffectiveness(double effectiveness, pokemon* o);
  bool useChargingMove(pokemon* self, pokemon* o, category c);
  bool useAttackMove(pokemon* self, pokemon* o, category c);
  bool useMultipleMove(pokemon* self, pokemon* o, category c, int min, int max);
  bool useRecoilorHealMove(pokemon* self, pokemon* o, category c, unsigned& amt, unsigned fraction);
  bool useStatAlteringMove(pokemon* self, pokemon* o, category c, battleStat s, prob p, whichPokemon w, upOrDown u, int amt);
  bool useStatAlteringMove(pokemon* self, pokemon* o, category c, Status s, prob p, whichPokemon w);
  bool alterStat(pokemon* affected, battleStat s, prob p, upOrDown u, int amt);
  bool inflictStatusEffect(pokemon* affected, Status s, prob p);
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
/*struct comet_punch : public attack { comet_punch();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct confusion : public attack { confusion();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct constrict : public attack { constrict();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct crabhammer : public attack { crabhammer();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct cut : public attack { cut();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*struct defense_curl : public attack { defense_curl();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct dig : public attack { dig();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct dizzy_punch : public attack { dizzy_punch();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct double_kick : public attack { double_kick();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct dream_eater : public attack { dream_eater();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct double_edge : public attack { double_edge();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct drill_peck : public attack { drill_peck();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct earthquake : public attack { earthquake();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct egg_bomb : public attack { egg_bomb();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct ember : public attack { ember();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct explosion : public attack { explosion();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct fire_blast : public attack { fire_blast();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct fire_punch : public attack { fire_punch();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*struct fissure : public attack { fissure();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct flamethrower : public attack { flamethrower();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*struct fly : public attack { fly();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct fury_attack : public attack { fury_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct fury_swipes : public attack { fury_swipes();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct glare : public attack { glare();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct growl : public attack { growl();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct growth : public attack { growth();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct gust : public attack { gust();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct harden : public attack { harden();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct headbutt : public attack { headbutt();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*struct high_jump_kick : public attack { high_jump_kick();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct horn_attack : public attack { horn_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct horn_drill : public attack { horn_drill();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct hydro_pump : public attack { hydro_pump();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct hyper_beam : public attack { hyper_beam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct hyper_fang : public attack { hyper_fang();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct hypnosis : public attack { hypnosis();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct ice_beam : public attack { ice_beam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct ice_punch : public attack { ice_punch();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct jump_kick : public attack { jump_kick();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct karate_chop : public attack { karate_chop();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
struct leech_life : public attack { leech_life();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct leer : public attack { leer();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
//struct lick : public attack { lick();
//virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct lovely_kiss : public attack { lovely_kiss();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct meditate : public attack { meditate();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct mega_drain : public attack { mega_drain();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct mega_kick : public attack { mega_kick();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct mega_punch : public attack { mega_punch();
  virtual bool useMove(pokemon* self, pokemon* o); };
/*
struct metronome : public attack { metronome();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct night_shade : public attack { night_shade();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct pay_day : public attack { pay_day();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct peck : public attack { peck();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*
struct pin_missle : public attack { pin_missle();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct poison_gas : public attack { poison_gas();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct poison_powder : public attack { poison_powder();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct poison_sting : public attack { poison_sting();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct pound : public attack { pound();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct psybeam : public attack { psybeam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct psychic : public attack { psychic();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct psywave : public attack { psywave();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct quick_attack : public attack { quick_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct razor_leaf : public attack { razor_leaf();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct recover : public attack { recover();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*
struct rock_slide : public attack {rock_slide();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct rock_throw : public attack { rock_throw();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct rolling_kick : public attack { rolling_kick();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct scratch : public attack { scratch();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct screech : public attack { screech();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*
struct seismic_toss : public attack { seismic_toss();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct self_destruct : public attack { self_destruct();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct sharpen : public attack { sharpen();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct sing : public attack { sing();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct skull_bash : public attack { skull_bash();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct sky_attack : public attack { sky_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct slam : public attack { slam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct slash : public attack { slash();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct sleep_powder : public attack { sleep_powder();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct sludge : public attack { sludge();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct smog : public attack { smog();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct soft_boiled : public attack { soft_boiled();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct solar_beam : public attack { solar_beam();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct sonic_boom : public attack { sonic_boom();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct spike_cannon : public attack { spike_cannon();
  virtual bool useMove(pokemon* self, pokemon* o); };

struct spore : public attack { spore();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct stomp : public attack { stomp();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct strength : public attack { strength();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct string_shot : public attack { string_shot();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct stun_spore : public attack { stun_spore();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct submission : public attack { submission();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct super_fang : public attack { super_fang();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct surf : public attack { surf();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct swords_dance : public attack { swords_dance();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct tail_whip : public attack { tail_whip();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct tackle : public attack { tackle();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct take_down : public attack { take_down();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct thrash : public attack { thrash();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct thunder : public attack { thunder();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct thunderpunch : public attack { thunderpunch();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct thundershock : public attack { thundershock();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct thunder_wave : public attack { thunder_wave();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct thunderbolt : public attack { thunderbolt();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct tri_attack : public attack { tri_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct twineedle : public attack { twineedle();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct vicegrip : public attack { vicegrip();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct vine_whip : public attack { vine_whip();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct water_gun : public attack { water_gun();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct waterfall : public attack { waterfall();
  virtual bool useMove(pokemon* self, pokemon* o); };
struct wing_attack : public attack { wing_attack();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/
/*struct withdraw : public attack { withdraw();
  virtual bool useMove(pokemon* self, pokemon* o); };
*/


#endif
