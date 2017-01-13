#include "pokedex.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
  For type parameter, sorting by:
  1 = Alphabetical Order
  2 = Pokedex number
  3 = Highest HP Stat
  4 = Highest Attack Stat
  5 = Highest Defense Stat
  6 = Highest Special Attack Stat
  7 = Highest Special Defense Stat
  8 = Highest Speed Stat
*/

//this is a very hacky way of making a pokedex, looking for a more efficient way
//to do this.
pokedex::pokedex() {
  size = 151;
  m_pokedex[0] = new bulbasaur();
  m_pokedex[1] = new ivysaur();
  m_pokedex[2] = new venusaur();
  m_pokedex[3] = new charmander();
  m_pokedex[4] = new charmeleon();
  m_pokedex[5] = new charizard();
  m_pokedex[6] = new squirtle();
  m_pokedex[7] = new wartortle();
  m_pokedex[8] = new blastoise();
  m_pokedex[9] = new caterpie();
  m_pokedex[10] = new metapod();
  m_pokedex[11] = new butterfree();
  m_pokedex[12] = new weedle();
  m_pokedex[13] = new kakuna();
  m_pokedex[14] = new beedrill();
  m_pokedex[15] = new pidgey();
  m_pokedex[16] = new pidgeotto();
  m_pokedex[17] = new pidgeot();
  m_pokedex[18] = new rattata();
  m_pokedex[19] = new raticate();
  m_pokedex[20] = new spearow();
  m_pokedex[21] = new fearow();
  m_pokedex[22] = new ekans();
  m_pokedex[23] = new arbok();
  m_pokedex[24] = new pikachu();
  m_pokedex[25] = new raichu();
  m_pokedex[26] = new sandshrew();
  m_pokedex[27] = new sandslash();
  m_pokedex[28] = new nidoranF();
  m_pokedex[29] = new nidorina();
  m_pokedex[30] = new nidoqueen();
  m_pokedex[31] = new nidoranM();
  m_pokedex[32] = new nidorino();
  m_pokedex[33] = new nidoking();
  m_pokedex[34] = new clefairy();
  m_pokedex[35] = new clefable();
  m_pokedex[36] = new vulpix();
  m_pokedex[37] = new ninetales();
  m_pokedex[38] = new jigglypuff();
  m_pokedex[39] = new wigglytuff();
  m_pokedex[40] = new zubat();
  m_pokedex[41] = new golbat();
  m_pokedex[42] = new oddish();
  m_pokedex[43] = new gloom();
  m_pokedex[44] = new vileplume();
  m_pokedex[45] = new paras();
  m_pokedex[46] = new parasect();
  m_pokedex[47] = new venonat();
  m_pokedex[48] = new venomoth();
  m_pokedex[49] = new diglett();
  m_pokedex[50] = new dugtrio();
  m_pokedex[51] = new meowth();
  m_pokedex[52] = new persian();
  m_pokedex[53] = new psyduck();
  m_pokedex[54] = new golduck();
  m_pokedex[55] = new mankey();
  m_pokedex[56] = new primeape();
  m_pokedex[57] = new growlithe();
  m_pokedex[58] = new arcanine();
  m_pokedex[59] = new poliwag();
  m_pokedex[60] = new poliwhirl();
  m_pokedex[61] = new poliwrath();
  m_pokedex[62] = new abra();
  m_pokedex[63] = new kadabra();
  m_pokedex[64] = new alakazam();
  m_pokedex[65] = new machop();
  m_pokedex[66] = new machoke();
  m_pokedex[67] = new machamp();
  m_pokedex[68] = new bellsprout();
  m_pokedex[69] = new weepinbell();
  m_pokedex[70] = new victreebel();
  m_pokedex[71] = new tentacool();
  m_pokedex[72] = new tentacruel();
  m_pokedex[73] = new geodude();
  m_pokedex[74] = new graveler();
  m_pokedex[75] = new golem();
  m_pokedex[76] = new ponyta();
  m_pokedex[77] = new rapidash();
  m_pokedex[78] = new slowpoke();
  m_pokedex[79] = new slowbro();
  m_pokedex[80] = new magnemite();
  m_pokedex[81] = new magneton();
  m_pokedex[82] = new farfetchD();
  m_pokedex[83] = new doduo();
  m_pokedex[84] = new dodrio();
  m_pokedex[85] = new seel();
  m_pokedex[86] = new dewgong();
  m_pokedex[87] = new grimer();
  m_pokedex[88] = new muk();
  m_pokedex[89] = new shellder();
  m_pokedex[90] = new cloyster();
  m_pokedex[91] = new gastly();
  m_pokedex[92] = new haunter();
  m_pokedex[93] = new gengar();
  m_pokedex[94] = new onix();
  m_pokedex[95] = new drowzee();
  m_pokedex[96] = new hypno();
  m_pokedex[97] = new krabby();
  m_pokedex[98] = new kingler();
  m_pokedex[99] = new voltorb();
  m_pokedex[100] = new electrode();
  m_pokedex[101] = new exeggcute();
  m_pokedex[102] = new exeggutor();
  m_pokedex[103] = new cubone();
  m_pokedex[104] = new marowak();
  m_pokedex[105] = new hitmonlee();
  m_pokedex[106] = new hitmonchan();
  m_pokedex[107] = new lickitung();
  m_pokedex[108] = new koffing();
  m_pokedex[109] = new weezing();
  m_pokedex[110] = new rhyhorn();
  m_pokedex[111] = new rhydon();
  m_pokedex[112] = new chansey();
  m_pokedex[113] = new tangela();
  m_pokedex[114] = new kangaskhan();
  m_pokedex[115] = new horsea();
  m_pokedex[116] = new seadra();
  m_pokedex[117] = new goldeen();
  m_pokedex[118] = new seaking();
  m_pokedex[119] = new staryu();
  m_pokedex[120] = new starmie();
  m_pokedex[121] = new mrMime();
  m_pokedex[122] = new scyther();
  m_pokedex[123] = new jynx();
  m_pokedex[124] = new electabuzz();
  m_pokedex[125] = new magmar();
  m_pokedex[126] = new pinsir();
  m_pokedex[127] = new tauros();
  m_pokedex[128] = new magikarp();
  m_pokedex[129] = new gyarados();
  m_pokedex[130] = new lapras();
  m_pokedex[131] = new ditto();
  m_pokedex[132] = new eevee();
  m_pokedex[133] = new vaporeon();
  m_pokedex[134] = new jolteon();
  m_pokedex[135] = new flareon();
  m_pokedex[136] = new porygon();
  m_pokedex[137] = new omanyte();
  m_pokedex[138] = new omastar();
  m_pokedex[139] = new kabuto();
  m_pokedex[140] = new kabutops();
  m_pokedex[141] = new aerodactyl();
  m_pokedex[142] = new snorlax();
  m_pokedex[143] = new articuno();
  m_pokedex[144] = new zapdos();
  m_pokedex[145] = new moltres();
  m_pokedex[146] = new dratini();
  m_pokedex[147] = new dragonair();
  m_pokedex[148] = new dragonite();
  m_pokedex[149] = new mewtwo();
  m_pokedex[150] = new mew();
}

pokeStat* pokedex::getEntryAt(int i) {
  return m_pokedex[i-1];
}

void pokedex::viewer() {
  print();
  for(;;) {
    int a;
    int b;
    cout << "Press 1-151 to view a pokedex entry or 0 to sort. Press Ctrl-C or input anything else to exit." << endl;
    cin >> a;
    if (!cin || a > 151 || a < 0) {
      exit(0);
    }
    else if (a == 0) {
      cout << "How would you like to sort it? Input 1 for name, 2 for national pokedex number, \n"
	   << "and 3 for base HP, 4 for base attack, 5 for base defense, 6 for base special attack, \n"
	   << "7 for base special defense, 8 for base speed"<< endl;
      cin >> b;
      while (b > 8 || b < 1) {
	cin.clear();
	cout << "Invalid input. Please try again." << endl;
	cin >> b;
      }
      sortBy(b);
      print();
    }
    else {
      showEntry(a);
    }
  }
}   

void pokedex::print() {
  cout << "#" << "\t" << "Name" << setw(15) << "\t\t" << "Type 1" << setw(15) << "\t\t" << "Type 2" << endl;
  for (int i = 0; i < size; i++) {
    cout << i + 1 << "\t" << m_pokedex[i] -> getName() << setw(15) << "\t\t" << m_pokedex[i] -> getType1().getName();
  if (m_pokedex[i] -> getType2().getName() == "NULL")
    cout << endl;
  else
    cout << setw(15) << "\t\t" << m_pokedex[i] -> getType2().getName() << endl;
  }
}

void pokedex::showEntry(int i) {
  cout << m_pokedex[i-1] -> getName() << setw(15) << "\t"
       << "National Pokedex #: " << m_pokedex[i-1] -> getNum() + 1 << '\n' 
       << "Base stats:" << endl;
  cout << "HP: "<< m_pokedex[i-1] -> getBaseHP() << '\n' << 
    "Attack: " << m_pokedex[i-1] -> getBaseAtk() << '\n' <<
    "Defense: " << m_pokedex[i-1] -> getBaseDef() << '\n' <<
    "Special Attack: " << m_pokedex[i-1] -> getBaseSplAtk() << '\n' <<
    "Special Defense: " << m_pokedex[i-1] -> getBaseSplDef() << '\n' <<
    "Speed: " << m_pokedex[i-1] -> getBaseSpeed() << endl;
}

void pokedex::sortBy(int i) {
  sort(i, 0, size - 1);
}

//merge sort using a temp array. Looking for a way to not require it.
void pokedex::merge(int type, int left, int mid, int right) {
  int left_end = mid - 1, temp_pos = left, num_elements = right - left + 1;
  switch(type) {
  case 1:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getName() <= m_pokedex[mid] -> getName()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 2:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getNum() <= m_pokedex[mid] -> getNum()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 3:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseHP() >= m_pokedex[mid] -> getBaseHP()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 4:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseAtk() >= m_pokedex[mid] -> getBaseAtk()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 5:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseDef() >= m_pokedex[mid] -> getBaseDef()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 6:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseSplAtk() >= m_pokedex[mid] -> getBaseSplAtk()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 7:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseSplDef() >= m_pokedex[mid] -> getBaseSplDef()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    break;
  case 8:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getBaseSpeed() >= m_pokedex[mid] -> getBaseSpeed()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
  }
  
  while (left <= left_end) {
    temp[temp_pos] = m_pokedex[left];
    left++;
    temp_pos++;
  }
  while (mid <= right) {
    temp[temp_pos] = m_pokedex[mid];
    mid++;
    temp_pos++;
  }
  for (int i = 0; i < num_elements; i++) {
    m_pokedex[right] = temp[right];
    right--;
  }
}

void pokedex::sort(int type, int start, int end) {
  if (end > start) {
    int mid = (start + end) / 2;
    sort(type, start, mid);
    sort(type, mid+1, end);
    merge(type, start, mid+1, end);
  }
}

pokedex::~pokedex() {
  for (int i = 0; i < size; i++) {
    delete m_pokedex[i];
  }
}
