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

bulbasaur::bulbasaur() : pokeStat(1, "bulbasaur", 45, 49, 49, 65, 65, 45, "grass", "poison") {}
ivysaur::ivysaur() : pokeStat(2, "ivysaur", 60, 62, 63, 80, 80, 60, "grass", "poison") {}
venusaur::venusaur() : pokeStat(3, "venusaur", 80, 82, 83, 100, 100, 80, "grass", "poison") {}
charmander::charmander() : pokeStat(4, "charmander", 39, 52, 43, 60, 50, 65, "fire", "NULL") {}
charmeleon::charmeleon() : pokeStat(5, "charmeleon", 58, 64, 58, 80, 65, 80, "fire", "NULL") {}
charizard::charizard() : pokeStat(6, "charizard", 78, 84, 78, 109, 85, 100, "fire", "flying") {}
squirtle::squirtle() : pokeStat(7, "squirtle", 44, 48, 65, 50, 64, 43, "water", "NULL") {}
wartortle::wartortle() : pokeStat(8, "wartortle", 59, 63, 80, 65, 80, 58, "water", "NULL") {}
blastoise::blastoise() : pokeStat(9, "blastoise", 79, 83, 100, 85, 105, 78, "water", "NULL") {}
caterpie::caterpie() : pokeStat(10, "caterpie", 45, 30, 35, 20, 20, 45, "bug", "NULL") {}
metapod::metapod() : pokeStat(11, "metapod", 50, 20, 55, 25, 25, 30, "bug", "NULL") {}
butterfree::butterfree() : pokeStat(12, "butterfree", 60, 45, 50, 80, 80, 70, "bug", "flying") {}
weedle::weedle() : pokeStat(13, "weedle", 40, 35, 30, 20, 20, 50, "bug", "poison") {}
kakuna::kakuna() : pokeStat(14, "kakuna", 45, 25, 50, 25, 25, 35, "bug", "poison") {}
beedrill::beedrill() : pokeStat(15, "beedrill", 65, 80, 40, 45, 80, 75, "bug", "poison") {}
pidgey::pidgey() : pokeStat(16, "pidgey", 40, 45, 40, 35, 35, 56, "normal", "flying") {}
pidgeotto::pidgeotto() : pokeStat(17, "pidgeotto", 63, 60, 55, 50, 50, 71, "normal", "flying") {}
pidgeot::pidgeot() : pokeStat(18, "pidgeot", 83, 80, 75, 70, 70, 91, "normal", "flying") {}
rattata::rattata() : pokeStat(19, "rattata", 30, 56, 35, 25, 35, 72, "normal", "NULL") {}
raticate::raticate() : pokeStat(20, "raticate", 55, 81, 60, 50, 70, 97, "normal", "NULL") {}
spearow::spearow() : pokeStat(21, "spearow", 40, 60, 30, 31, 31, 70, "normal", "flying") {}
fearow::fearow() : pokeStat(22, "fearow", 65, 90, 65, 61, 61, 100, "normal", "flying") {}
ekans::ekans() : pokeStat(23, "ekans", 35, 60, 44, 40, 54, 55, "poison", "NULL") {}
arbok::arbok() : pokeStat(24, "arbok", 60, 85, 69, 65, 79, 80, "poison", "NULL") {}
pikachu::pikachu() : pokeStat(25, "pikachu", 35, 55, 30, 50, 40, 90, "electric", "NULL") {}
raichu::raichu() : pokeStat(26, "raichu", 60, 90, 55, 90, 80, 100, "electric", "NULL") {}
sandshrew::sandshrew() : pokeStat(27, "sandshrew", 50, 75, 85, 20, 30, 40, "ground", "NULL") {}
sandslash::sandslash() : pokeStat(28, "sandslash", 75, 100, 110, 45, 55, 65, "ground", "NULL") {}
nidoranF::nidoranF() : pokeStat(29, "nidoran\xC", 55, 47, 52, 40, 40, 41, "poison", "NULL") {}
nidorina::nidorina() : pokeStat(30, "nidorina", 70, 62, 67, 55, 55, 56, "poison", "NULL") {}
nidoqueen::nidoqueen() : pokeStat(31, "nidoqueen", 90, 82, 87, 75, 85, 76, "poison", "ground") {}
nidoranM::nidoranM() : pokeStat(32, "nidoran\xB", 46, 57, 40, 40, 40, 50, "poison", "NULL") {}
nidorino::nidorino() : pokeStat(33, "nidorino", 61, 72, 57, 55, 55, 65, "poison", "NULL") {}
nidoking::nidoking() : pokeStat(34, "nidoking", 81, 92, 7, 85, 75, 85, "poison", "ground") {}
clefairy::clefairy() : pokeStat(35, "clefairy", 70, 45, 48, 60, 65, 35, "normal", "NULL") {}
clefable::clefable() : pokeStat(36, "clefable", 95, 70, 73, 85, 90, 60, "normal", "NULL") {}
vulpix::vulpix() : pokeStat(37, "vulpix", 38, 41, 40, 50, 65, 65, "fire", "NULL") {}
ninetales::ninetales() : pokeStat(38, "ninetales", 73, 76, 75, 81, 100, 100, "fire", "NULL") {}
jigglypuff::jigglypuff() : pokeStat(39, "jigglypuff", 115, 45, 20, 45, 25, 20, "normal", "NULL") {}
wigglytuff::wigglytuff() : pokeStat(40, "wigglytuff", 140, 70, 45, 75, 50, 45, "normal", "NULL") {}
zubat::zubat() : pokeStat(41, "zubat", 40, 45, 35, 30, 40, 55, "poison", "flying") {}
golbat::golbat() : pokeStat(42, "golbat", 75, 80, 70, 65, 75, 90, "poison", "flying") {}
oddish::oddish() : pokeStat(43, "oddish", 45, 50, 55, 75, 65, 30, "grass", "poison") {}
gloom::gloom() : pokeStat(44, "gloom", 60, 65, 70, 85, 75, 40, "grass", "poison") {}
vileplume::vileplume() : pokeStat(45, "vileplume", 75, 80, 85, 100, 90, 50, "grass", "poison") {}
paras::paras() : pokeStat(46, "paras", 35, 70, 55, 45, 55, 25, "bug", "grass") {}
parasect::parasect() : pokeStat(47, "parasect", 60, 95, 80, 60, 80, 30, "bug", "grass") {}
venonat::venonat() : pokeStat(48, "venonat", 60, 55, 50, 40, 55, 45, "bug", "poison") {}
venomoth::venomoth() : pokeStat(49, "venomoth", 70, 65, 60, 90, 75, 90, "bug", "poison") {}
diglett::diglett() : pokeStat(50, "diglett", 10, 55, 25, 35, 45, 95, "ground", "NULL") {}
dugtrio::dugtrio() : pokeStat(51, "dugtrio", 35, 80, 50, 50, 70, 120, "ground", "NULL") {}
meowth::meowth() : pokeStat(52, "meowth", 40, 45, 35, 40, 40, 90, "normal", "NULL") {}
persian::persian() : pokeStat(53, "persian", 65, 70, 60, 65, 65, 115, "normal", "NULL") {}
psyduck::psyduck() : pokeStat(54, "psyduck", 50, 52, 48, 65, 50, 55, "water", "NULL") {}
golduck::golduck() : pokeStat(55, "golduck", 80, 82, 78, 95, 80, 85, "water", "NULL") {}
mankey::mankey() : pokeStat(56, "mankey", 40, 80, 35, 35, 45, 70, "fighting", "NULL") {}
primeape::primeape() : pokeStat(57, "primeape", 65, 105, 60, 60, 70, 95, "fighting", "NULL") {}
growlithe::growlithe() : pokeStat(58, "growlithe", 55, 70, 45, 70, 50, 60, "fire", "NULL") {}
arcanine::arcanine() : pokeStat(59, "arcanine", 90, 110, 80, 100, 80, 95, "fire", "NULL") {}
poliwag::poliwag() : pokeStat(60, "poliwag", 40, 50, 40, 40, 40, 90, "water", "NULL") {}
poliwhirl::poliwhirl() : pokeStat(61, "poliwhirl", 65, 65, 65, 50, 50, 90, "water", "NULL") {}
poliwrath::poliwrath() : pokeStat(62, "poliwrath", 90, 85, 95, 70, 90, 70, "water", "NULL") {}
abra::abra() : pokeStat(63, "abra", 25, 20, 15, 105, 55, 90, "psychic", "NULL") {}
kadabra::kadabra() : pokeStat(64, "kadabra", 40, 35, 30, 120, 70, 105, "psychic", "NULL") {}
alakazam::alakazam() : pokeStat(65, "alakazam", 55, 50, 45, 135, 85, 120, "psychic", "NULL") {}
machop::machop() : pokeStat(66, "machop", 70, 80, 50, 35, 35, 35, "fighting", "NULL") {}
machoke::machoke() : pokeStat(67, "machoke", 80, 100, 70, 50, 60, 45, "fighting", "NULL") {}
machamp::machamp() : pokeStat(68, "machamp", 90, 130, 80, 65, 85, 55, "fighting", "NULL") {}
bellsprout::bellsprout() : pokeStat(69, "bellsprout", 50, 75, 35, 70, 30, 40, "grass", "poison") {}
weepinbell::weepinbell() : pokeStat(70, "weepinbell", 65, 90, 50, 85, 45, 55, "grass", "poison") {}
victreebel::victreebel() : pokeStat(71, "victreebel", 80, 105, 65, 100, 60, 70, "grass", "poison") {}
tentacool::tentacool() : pokeStat(72, "tentacool", 40, 40, 35, 50, 100, 70, "water", "poison") {}
tentacruel::tentacruel() : pokeStat(73, "tentacruel", 80, 70, 65, 80, 120, 100, "water", "poison") {}
geodude::geodude() : pokeStat(74, "geodude", 40, 80, 100, 30, 30, 20, "rock", "ground") {}
graveler::graveler() : pokeStat(75, "graveler", 55, 95, 115, 45, 45, 35, "rock", "ground") {}
golem::golem() : pokeStat(76, "golem", 80, 110, 130, 55, 65, 45, "rock", "ground") {}
ponyta::ponyta() : pokeStat(77, "ponyta", 50, 85, 55, 65, 65, 90, "fire", "NULL") {}
rapidash::rapidash() : pokeStat(78, "rapidash", 65, 100, 70, 80, 80, 105, "fire", "NULL") {}
slowpoke::slowpoke() : pokeStat(79, "slowpoke", 90, 65, 65, 40, 40, 15, "water", "psychic") {}
slowbro::slowbro() : pokeStat(80, "slowbro", 95, 75, 110, 100, 80, 30, "water", "psychic") {}
magnemite::magnemite() : pokeStat(81, "magnemite", 25, 35, 70, 95, 55, 45, "electric", "steel") {}
magneton::magneton() : pokeStat(82, "magneton", 50, 60, 95, 120, 70, 70, "electric", "steel") {}
farfetchD::farfetchD() : pokeStat(83, "farfetch'd", 52, 65, 55, 58, 62, 60, "normal", "flying") {}
doduo::doduo() : pokeStat(84, "doduo", 35, 85, 45, 35, 35, 75, "normal", "flying") {}
dodrio::dodrio() : pokeStat(85, "dodrio", 60, 110, 70, 60, 60, 100, "normal", "flying") {}
seel::seel() : pokeStat(86, "seel", 65, 45, 55, 45, 70, 45, "water", "NULL") {}
dewgong::dewgong() : pokeStat(87, "dewgong", 90, 70, 80, 70, 95, 70, "water", "ice") {}
grimer::grimer() : pokeStat(88, "grimer", 80, 80, 50, 40, 50, 25, "poison", "NULL") {}
muk::muk() : pokeStat(89, "muk", 105, 105, 75, 65, 100, 50, "poison", "NULL") {}
shellder::shellder() : pokeStat(90, "shellder", 30, 65, 100, 45, 25, 40, "water", "NULL") {}
cloyster::cloyster() : pokeStat(91, "cloyster", 50, 95, 180, 85, 45, 70, "water", "ice") {}
gastly::gastly() : pokeStat(92, "gastly", 30, 35, 30, 100, 35, 80, "ghost", "poison") {}
haunter::haunter() : pokeStat(93, "haunter", 45, 50, 45, 115, 55, 95, "ghost", "poison") {}
gengar::gengar() : pokeStat(94, "gengar", 60, 65, 60, 130, 75, 110, "ghost", "poison") {}
onix::onix() : pokeStat(95, "onix", 35, 45, 160, 30, 45, 70, "rock", "ground") {}
drowzee::drowzee() : pokeStat(96, "drowzee", 60, 48, 45, 43, 90, 42, "psychic", "NULL") {}
hypno::hypno() : pokeStat(97, "hypno", 85, 73, 70, 73, 115, 67, "psychic", "NULL") {}
krabby::krabby() : pokeStat(98, "krabby", 30, 105, 90, 25, 25, 50, "water", "NULL") {}
kingler::kingler() : pokeStat(99, "kingler", 55, 130, 115, 50, 50, 75, "water", "NULL") {}
voltorb::voltorb() : pokeStat(100, "voltorb", 40, 30, 50, 55, 55, 100, "electric", "NULL") {}
electrode::electrode() : pokeStat(101, "electrode", 60, 50, 70, 80, 80, 140, "electric", "NULL") {}
exeggcute::exeggcute() : pokeStat(102, "exeggcute", 60, 40, 80, 60, 45, 40, "grass", "psychic") {}
exeggutor::exeggutor() : pokeStat(103, "exeggutor", 95, 95, 85, 125, 65, 55, "grass", "psychic") {}
cubone::cubone() : pokeStat(104, "cubone", 50, 50, 95, 40, 50, 35, "ground", "NULL") {}
marowak::marowak() : pokeStat(105, "marowak", 60, 80, 110, 50, 80, 45, "ground", "NULL") {}
hitmonlee::hitmonlee() : pokeStat(106, "hitmonlee", 50, 120, 53, 35, 110, 87, "fighting", "NULL") {}
hitmonchan::hitmonchan() : pokeStat(107, "hitmonchan", 50, 105, 79, 35, 110, 76, "fighting", "NULL") {}
lickitung::lickitung() : pokeStat(108, "lickitung", 90, 55, 75, 60, 75, 30, "normal", "NULL") {}
koffing::koffing() : pokeStat(109, "koffing", 40, 65, 95, 60, 45, 35, "poison", "NULL") {}
weezing::weezing() : pokeStat(110, "weezing", 65, 90, 120, 85, 70, 60, "poison", "NULL") {}
rhyhorn::rhyhorn() : pokeStat(111, "rhyhorn", 80, 85, 95, 30, 30, 25, "ground", "rock") {}
rhydon::rhydon() : pokeStat(112, "rhydon", 105, 130, 120, 45, 45, 40, "ground", "rock") {}
chansey::chansey() : pokeStat(113, "chansey", 250, 5, 5, 35, 105, 50, "normal", "NULL") {}
tangela::tangela() : pokeStat(114, "tangela", 65, 55, 115, 100, 40, 60, "grass", "NULL") {}
kangaskhan::kangaskhan() : pokeStat(115, "kangaskhan", 105, 95, 80, 40, 80, 90, "normal", "NULL") {}
horsea::horsea() : pokeStat(116, "horsea", 30, 40, 70, 70, 25, 60, "water", "NULL") {}
seadra::seadra() : pokeStat(117, "seadra", 55, 65, 95, 95, 45, 85, "water", "NULL") {}
goldeen::goldeen() : pokeStat(118, "goldeen", 45, 67, 60, 35, 50, 63, "water", "NULL") {}
seaking::seaking() : pokeStat(119, "seaking", 80, 92, 65, 65, 80, 68, "water", "NULL") {}
staryu::staryu() : pokeStat(120, "staryu", 30, 45, 55, 70, 55, 85, "water", "NULL") {}
starmie::starmie() : pokeStat(121, "starmie", 60, 75, 85, 100, 85, 115, "water", "psychic") {}
mrMime::mrMime() : pokeStat(122, "Mr. Mime", 40, 45, 65, 100, 120, 90, "psychic", "NULL") {}
scyther::scyther() : pokeStat(123, "scyther", 70, 110, 80, 55, 80, 105, "bug", "flying") {}
jynx::jynx() : pokeStat(124, "jynx", 65, 50, 35, 115, 95, 95, "ice", "psychic") {}
electabuzz::electabuzz() : pokeStat(125, "electabuzz", 65, 83, 57, 95, 85, 105, "electric", "NULL") {}
magmar::magmar() : pokeStat(126, "magmar", 65, 95, 57, 100, 85, 93, "fire", "NULL") {}
pinsir::pinsir() : pokeStat(127, "pinsir", 65, 125, 100, 55, 70, 85, "bug", "NULL") {}
tauros::tauros() : pokeStat(128, "tauros", 75, 100, 95, 40, 70, 110, "normal", "NULL") {}
magikarp::magikarp() : pokeStat(129, "magikarp", 20, 10, 55, 15, 20, 80, "water", "NULL") {}
gyarados::gyarados() : pokeStat(130, "gyarados", 95, 125, 79, 60, 100, 81, "water", "flying") {}
lapras::lapras() : pokeStat(131, "lapras", 130, 85, 80, 85, 95, 60, "water", "ice") {}
ditto::ditto() : pokeStat(132, "ditto", 48, 48, 48, 48, 48, 48, "normal", "NULL") {}
eevee::eevee() : pokeStat(133, "eevee", 55, 55, 50, 45, 65, 55, "normal", "NULL") {}
vaporeon::vaporeon() : pokeStat(134, "vaporeon", 130, 65, 60, 110, 95, 65, "water", "NULL") {}
jolteon::jolteon() : pokeStat(135, "jolteon", 65, 65, 60, 110, 95, 130, "electric", "NULL") {}
flareon::flareon() : pokeStat(136, "flareon", 65, 130, 60, 95, 110, 65, "fire", "NULL") {}
porygon::porygon() : pokeStat(137, "porygon", 65, 60, 70, 85, 75, 40, "normal", "NULL") {}
omanyte::omanyte() : pokeStat(138, "omanyte", 35, 40, 100, 90, 55, 35, "rock", "water") {}
omastar::omastar() : pokeStat(139, "omastar", 70, 60, 125, 115, 70, 55, "rock", "water") {}
kabuto::kabuto() : pokeStat(140, "kabuto", 30, 80, 90, 55, 45, 55, "rock", "water") {}
kabutops::kabutops() : pokeStat(141, "kabutops", 60, 115, 105, 65, 70, 80, "rock", "water") {}
aerodactyl::aerodactyl() : pokeStat(142, "aerodactyl", 80, 105, 65, 60, 75, 130, "rock", "flying") {}
snorlax::snorlax() : pokeStat(143, "snorlax", 160, 110, 65, 65, 110, 30, "normal", "NULL") {}
articuno::articuno() : pokeStat(144, "articuno", 90, 85, 100, 95, 125, 85, "ice", "flying") {}
zapdos::zapdos() : pokeStat(145, "zapdos", 90, 90, 85, 125, 90, 100, "electric", "flying") {}
moltres::moltres() : pokeStat(146, "moltres", 90, 100, 90, 125, 85, 90, "fire", "flying") {}
dratini::dratini() : pokeStat(147, "dratini", 41, 64, 45, 50, 50, 50, "dragon", "NULL") {}
dragonair::dragonair() : pokeStat(148, "dragonair", 61, 84, 65, 70, 70, 70, "dragon", "NULL") {}
dragonite::dragonite() : pokeStat(149, "dragonite", 91, 134, 95, 100, 100, 80, "dragon", "flying") {}
mewtwo::mewtwo() : pokeStat(150, "mewtwo", 106, 110, 90, 154, 90, 130, "psychic", "NULL") {}
mew::mew() : pokeStat(151, "mew", 100, 100, 100, 100, 100, 100, "psychic", "NULL") {}

pokeStat::pokeStat(unsigned n, string nm, unsigned h, unsigned a, 
		   unsigned def, unsigned splatk, unsigned spldef, unsigned speed, string t1, string t2) 
  :  m_type1(t1), m_type2(t2)
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

pokeStat::pokeStat(const pokeStat& old)
  : m_type1(old.m_type1), m_type2(old.m_type2) {
  object_id = old.object_id;
  name = old.name;
  base_hp = old.base_hp;
  base_atk = old.base_atk;
  base_def = old.base_def;
  base_splatk = old.base_splatk;
  base_spldef = old.base_spldef;
  base_speed = old.base_speed;
}

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
