/* The Pokemon Database contains all the info about the pokemon.
 * All the types and stats are based off Gen II.
 * All the base stats are taken from Bulbapedia.
 * TODO:
 * Add more pokemon.
 * Find a more efficient way to make a database.
 */

#include "pokedb.h"

class pokeStat;
class type;

bulbasaur::bulbasaur() : pokeStat(1, "bulbasaur", 45, 49, 49, 65, 65, 45, "grass", "poison", "The seed on its \
back is filled with nutrients. The seed grows steadily larger as its body grows.") {}
ivysaur::ivysaur() : pokeStat(2, "ivysaur", 60, 62, 63, 80, 80, 60, "grass", "poison", "Exposure to sunlight \
adds to its strength. Sunlight also makes the bud on its back grow larger.") {}
venusaur::venusaur() : pokeStat(3, "venusaur", 80, 82, 83, 100, 100, 80, "grass", "poison", "By spreading the \
broad petals of its flower and catching the sun's rays, it fills its body with power.") {}
charmander::charmander() : pokeStat(4, "charmander", 39, 52, 43, 60, 50, 65, "fire", "NULL", "The flame on its \
tail shows the strength of its life force. If it is weak, the flame also burns weakly.") {}
charmeleon::charmeleon() : pokeStat(5, "charmeleon", 58, 64, 58, 80, 65, 80, "fire", "NULL", "It is very \
hot-headed by nature, so it constantly seeks opponents. It calms down only when it wins.") {}
charizard::charizard() : pokeStat(6, "charizard", 78, 84, 78, 109, 85, 100, "fire", "flying", "If Charizard \
becomes furious, the flame at the tip of its tail flares up in a whitish-blue color.") {}
squirtle::squirtle() : pokeStat(7, "squirtle", 44, 48, 65, 50, 64, 43, "water", "NULL", "The shell is soft when \
it is born. It soon becomes so resilient, prodding fingers will bounce off it.") {}
wartortle::wartortle() : pokeStat(8, "wartortle", 59, 63, 80, 65, 80, 58, "water", "NULL", "It is recognized as \
a symbol of longevity. If its shell has algae on it, that Wartortle is very old.") {}
blastoise::blastoise() : pokeStat(9, "blastoise", 79, 83, 100, 85, 105, 78, "water", "NULL", "It deliberately \
makes itself heavy so it can withstand the recoil of the water jets it fires.") {}

pokeStat::pokeStat(unsigned n, string nm, unsigned h, unsigned a, 
		   unsigned def, unsigned splatk, unsigned spldef, unsigned speed, string t1, string t2, string d) 
  :  m_type1(t1), m_type2(t2), desc(d)
{
    object_id = n;
    name = nm;
    base_hp = h;
    base_atk = a;
    base_def = def;
    base_splatk = splatk;
    base_spldef = spldef;
    base_speed = speed;
}

string pokeStat::getDesc() { return desc; }
unsigned pokeStat::getNum() { return object_id; }
string pokeStat::getName() { return name; }
type pokeStat::getType1() { return m_type1; }
type pokeStat::getType2() { return m_type2; }
unsigned pokeStat::getBaseHP() { return base_hp; }
unsigned pokeStat::getBaseAtk() { return base_atk; }
unsigned pokeStat::getBaseDef() { return base_def; }
unsigned pokeStat::getBaseSplAtk() { return base_splatk; }
unsigned pokeStat::getBaseSplDef() { return base_spldef; }
unsigned pokeStat::getBaseSpeed() { return base_speed; }
