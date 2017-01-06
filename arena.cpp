#include "arena.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

arena::arena() {
  generatePokemon();
}

arena::~arena() {
  delete player;
  delete opponent;
}

void arena::play() {
  cout << player->getNickName() << " vs. " << opponent->getNickName() << endl;
  while(player->getHP() > 0 && opponent->getHP() > 0) {
    cout << player->getNickName() << " HP: " << player->getHP() << endl;
    cout << opponent->getNickName() << " HP: " << opponent->getHP() << endl;
    int a = 0;
    player->printMoves();
    cout << "Pick a move 1 - 4." << endl;
    cin >> a;
    while (a < 1 || a > 4) {
      cout << "Invalid move. Try again." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      cin >> a;
     }
    int b = rand() % 4 + 1;
    if (player->getSpeed() >= opponent->getSpeed()) {
      cout << player->getNickName() << " used " << player->getMove(a)->getName() << "!" << endl;
      player->getMove(a)->useMove(player, opponent);
      cout << opponent->getNickName() << " used " << opponent->getMove(b)->getName() << "!" << endl;
      opponent->getMove(b)->useMove(opponent, player);
    }
    else {
      cout << opponent->getNickName() << " used " << opponent->getMove(b)->getName() << "!" << endl;
      opponent->getMove(b)->useMove(opponent, player);
      cout << player->getNickName() << " used " << player->getMove(a)->getName() << "!" << endl;
      player->getMove(a)->useMove(player, opponent);
    }
  }
  if (player->getHP() == 0)
    cout << "The opponent won!" << endl;
  else if (opponent->getHP() == 0)
    cout << "You won!" << endl;
  else
    cout << "Draw." << endl;
}



void arena::generatePokemon() {
  int a[2];
  a[0] = rand() % 151 + 1;
  a[1] = rand() % 151 + 1;
  switch (a[0]) {
  case 1:
    trainer = new bulbasaur();
    break;
  case 2:
    trainer = new ivysaur();
    break;
  case 3:
    trainer = new venusaur();
    break;
  case 4:
    trainer = new charmander();
    break;
  case 5:
    trainer = new charmeleon();
    break;
  case 6:
    trainer = new charizard();
    break;
  case 7:
    trainer = new squirtle();
    break;
  case 8:
    trainer = new wartortle();
    break;
  case 9:
    trainer = new blastoise();
    break;
  case 10:
    trainer = new caterpie();
    break;
  case 11:
    trainer = new metapod();
    break;
  case 12:
    trainer = new butterfree();
    break;
  case 13:
    trainer = new weedle();
    break;
  case 14:
    trainer = new kakuna();
    break;
  case 15:
    trainer = new beedrill();
    break;
  case 16:
    trainer = new pidgey();
    break;
  case 17:
    trainer = new pidgeotto();
    break;
  case 18:
    trainer = new pidgeot();
    break;
  case 19:
    trainer = new rattata();
    break;
  case 20:
    trainer = new raticate();
    break;
  case 21:
    trainer = new spearow();
    break;
  case 22:
    trainer = new fearow();
    break;
  case 23:
    trainer = new ekans();
    break;
  case 24:
    trainer = new arbok();
    break;
  case 25:
    trainer = new pikachu();
    break;
  case 26:
    trainer = new raichu();
    break;
  case 27:
    trainer = new sandshrew();
    break;
  case 28:
    trainer = new sandslash();
    break;
  case 29:
    trainer = new nidoranF();
    break;
  case 30:
    trainer = new nidorina();
    break;
  case 31:
    trainer = new nidoqueen();
    break;
  case 32:
    trainer = new nidoranM();
    break;
  case 33:
    trainer = new nidorino();
    break;
  case 34:
    trainer = new nidoking();
    break;
  case 35:
    trainer = new clefairy();
    break;
  case 36:
    trainer = new clefable();
    break;
  case 37:
    trainer = new vulpix();
    break;
  case 38:
    trainer = new ninetales();
    break;
  case 39:
    trainer = new jigglypuff();
    break;
  case 40:
    trainer = new wigglytuff();
    break;
  case 41:
    trainer = new zubat();
    break;
  case 42:
    trainer = new golbat();
    break;
  case 43:
    trainer = new oddish();
    break;
  case 44:
    trainer = new gloom();
    break;
  case 45:
    trainer = new vileplume();
    break;
  case 46:
    trainer = new paras();
    break;
  case 47:
    trainer = new parasect();
    break;
  case 48:
    trainer = new venonat();
    break;
  case 49:
    trainer = new venomoth();
    break;
  case 50:
    trainer = new diglett();
    break;
  case 51:
    trainer = new dugtrio();
    break;
  case 52:
    trainer = new meowth();
    break;
  case 53:
    trainer = new persian();
    break;
  case 54:
    trainer = new psyduck();
    break;
  case 55:
    trainer = new golduck();
    break;
  case 56:
    trainer = new mankey();
    break;
  case 57:
    trainer = new primeape();
    break;
  case 58:
    trainer = new growlithe();
    break;
  case 59:
    trainer = new arcanine();
    break;
  case 60:
    trainer = new poliwag();
    break;
  case 61:
    trainer = new poliwhirl();
    break;
  case 62:
    trainer = new poliwrath();
    break;
  case 63:
    trainer = new abra();
    break;
  case 64:
    trainer = new kadabra();
    break;
  case 65:
    trainer = new alakazam();
    break;
  case 66:
    trainer = new machop();
    break;
  case 67:
    trainer = new machoke();
    break;
  case 68:
    trainer = new machamp();
    break;
  case 69:
    trainer = new bellsprout();
    break;
  case 70:
    trainer = new weepinbell();
    break;
  case 71:
    trainer = new victreebel();
    break;
  case 72:
    trainer = new tentacool();
    break;
  case 73:
    trainer = new tentacruel();
    break;
  case 74:
    trainer = new geodude();
    break;
  case 75:
    trainer = new graveler();
    break;
  case 76:
    trainer = new golem();
    break;
  case 77:
    trainer = new ponyta();
    break;
  case 78:
    trainer = new rapidash();
    break;
  case 79:
    trainer = new slowpoke();
    break;
  case 80:
    trainer = new slowbro();
    break;
  case 81:
    trainer = new magnemite();
    break;
  case 82:
    trainer = new magneton();
    break;
  case 83:
    trainer = new farfetchD();
    break;
  case 84:
    trainer = new doduo();
    break;
  case 85:
    trainer = new dodrio();
    break;
  case 86:
    trainer = new seel();
    break;
  case 87:
    trainer = new dewgong();
    break;
  case 88:
    trainer = new grimer();
    break;
  case 89:
    trainer = new muk();
    break;
  case 90:
    trainer = new shellder();
    break;
  case 91:
    trainer = new cloyster();
    break;
  case 92:
    trainer = new gastly();
    break;
  case 93:
    trainer = new haunter();
    break;
  case 94:
    trainer = new haunter();
    break;
  case 95:
    trainer = new onix();
    break;
  case 96:
    trainer = new drowzee();
    break;
  case 97:
    trainer = new hypno();
    break;
  case 98:
    trainer = new krabby();
    break;
  case 99:
    trainer = new kingler();
    break;
  case 100:
    trainer = new voltorb();
    break;
  case 101:
    trainer = new electrode();
    break;
  case 102:
    trainer = new exeggcute();
    break;
  case 103:
    trainer = new exeggutor();
    break;
  case 104:
    trainer = new cubone();
    break;
  case 105:
    trainer = new marowak();
    break;
  case 106:
    trainer = new hitmonlee();
    break;
  case 107:
    trainer = new hitmonchan();
    break;
  case 108:
    trainer = new lickitung();
    break;
  case 109:
    trainer = new koffing();
    break;
  case 110:
    trainer = new weezing();
    break;
  case 111:
    trainer = new rhyhorn();
    break;
  case 112:
    trainer = new rhydon();
    break;
  case 113:
    trainer = new chansey();
    break;
  case 114:
    trainer = new tangela();
    break;
  case 115:
    trainer = new kangaskhan();
    break;
  case 116:
    trainer = new horsea();
    break;
  case 117:
    trainer = new seadra();
    break;
  case 118:
    trainer = new goldeen();
    break;
  case 119:
    trainer = new seaking();
    break;
  case 120:
    trainer = new staryu();
    break;
  case 121:
    trainer = new starmie();
    break;
  case 122:
    trainer = new mrMime();
    break;
  case 123:
    trainer = new scyther();
    break;
  case 124:
    trainer = new jynx();
    break;
  case 125:
    trainer = new electabuzz();
    break;
  case 126:
    trainer = new magmar();
    break;
  case 127:
    trainer = new pinsir();
    break;
  case 128:
    trainer = new tauros();
    break;
  case 129:
    trainer = new magikarp();
    break;
  case 130:
    trainer = new gyarados();
    break;
  case 131:
    trainer = new lapras();
    break;
  case 132:
    trainer = new ditto();
    break;
  case 133:
    trainer = new eevee();
    break;
  case 134:
    trainer = new vaporeon();
    break;
  case 135:
    trainer = new jolteon();
    break;
  case 136:
    trainer = new flareon();
    break;
  case 137:
    trainer = new porygon();
    break;
  case 138:
    trainer = new omanyte();
    break;
  case 139:
    trainer = new omastar();
    break;
  case 140:
    trainer = new kabuto();
    break;
  case 141:
    trainer = new kabutops();
    break;
  case 142:
    trainer = new aerodactyl();
    break;
  case 143:
    trainer = new snorlax();
    break;
  case 144:
    trainer = new articuno();
    break;
  case 145:
    trainer = new zapdos();
    break;
  case 146:
    trainer = new moltres();
    break;
  case 147:
    trainer = new dratini();
    break;
  case 148:
    trainer = new dragonair();
    break;
  case 149:
    trainer = new dragonite();
    break;
  case 150:
    trainer = new mewtwo();
    break;
  case 151:
    trainer = new mew();
    break;
  }
  switch (a[1]) {
  case 1:
    cpu = new bulbasaur();
    break;
  case 2:
    cpu = new ivysaur();
    break;
  case 3:
    cpu = new venusaur();
    break;
  case 4:
    cpu = new charmander();
    break;
  case 5:
    cpu = new charmeleon();
    break;
  case 6:
    cpu = new charizard();
    break;
  case 7:
    cpu = new squirtle();
    break;
  case 8:
    cpu = new wartortle();
    break;
  case 9:
    cpu = new blastoise();
    break;
  case 10:
    cpu = new caterpie();
    break;
  case 11:
    cpu = new metapod();
    break;
  case 12:
    cpu = new butterfree();
    break;
  case 13:
    cpu = new weedle();
    break;
  case 14:
    cpu = new kakuna();
    break;
  case 15:
    cpu = new beedrill();
    break;
  case 16:
    cpu = new pidgey();
    break;
  case 17:
    cpu = new pidgeotto();
    break;
  case 18:
    cpu = new pidgeot();
    break;
  case 19:
    cpu = new rattata();
    break;
  case 20:
    cpu = new raticate();
    break;
  case 21:
    cpu = new spearow();
    break;
  case 22:
    cpu = new fearow();
    break;
  case 23:
    cpu = new ekans();
    break;
  case 24:
    cpu = new arbok();
    break;
  case 25:
    cpu = new pikachu();
    break;
  case 26:
    cpu = new raichu();
    break;
  case 27:
    cpu = new sandshrew();
    break;
  case 28:
    cpu = new sandslash();
    break;
  case 29:
    cpu = new nidoranF();
    break;
  case 30:
    cpu = new nidorina();
    break;
  case 31:
    cpu = new nidoqueen();
    break;
  case 32:
    cpu = new nidoranM();
    break;
  case 33:
    cpu = new nidorino();
    break;
  case 34:
    cpu = new nidoking();
    break;
  case 35:
    cpu = new clefairy();
    break;
  case 36:
    cpu = new clefable();
    break;
  case 37:
    cpu = new vulpix();
    break;
  case 38:
    cpu = new ninetales();
    break;
  case 39:
    cpu = new jigglypuff();
    break;
  case 40:
    cpu = new wigglytuff();
    break;
  case 41:
    cpu = new zubat();
    break;
  case 42:
    cpu = new golbat();
    break;
  case 43:
    cpu = new oddish();
    break;
  case 44:
    cpu = new gloom();
    break;
  case 45:
    cpu = new vileplume();
    break;
  case 46:
    cpu = new paras();
    break;
  case 47:
    cpu = new parasect();
    break;
  case 48:
    cpu = new venonat();
    break;
  case 49:
    cpu = new venomoth();
    break;
  case 50:
    cpu = new diglett();
    break;
  case 51:
    cpu = new dugtrio();
    break;
  case 52:
    cpu = new meowth();
    break;
  case 53:
    cpu = new persian();
    break;
  case 54:
    cpu = new psyduck();
    break;
  case 55:
    cpu = new golduck();
    break;
  case 56:
    cpu = new mankey();
    break;
  case 57:
    cpu = new primeape();
    break;
  case 58:
    cpu = new growlithe();
    break;
  case 59:
    cpu = new arcanine();
    break;
  case 60:
    cpu = new poliwag();
    break;
  case 61:
    cpu = new poliwhirl();
    break;
  case 62:
    cpu = new poliwrath();
    break;
  case 63:
    cpu = new abra();
    break;
  case 64:
    cpu = new kadabra();
    break;
  case 65:
    cpu = new alakazam();
    break;
  case 66:
    cpu = new machop();
    break;
  case 67:
    cpu = new machoke();
    break;
  case 68:
    cpu = new machamp();
    break;
  case 69:
    cpu = new bellsprout();
    break;
  case 70:
    cpu = new weepinbell();
    break;
  case 71:
    cpu = new victreebel();
    break;
  case 72:
    cpu = new tentacool();
    break;
  case 73:
    cpu = new tentacruel();
    break;
  case 74:
    cpu = new geodude();
    break;
  case 75:
    cpu = new graveler();
    break;
  case 76:
    cpu = new golem();
    break;
  case 77:
    cpu = new ponyta();
    break;
  case 78:
    cpu = new rapidash();
    break;
  case 79:
    cpu = new slowpoke();
    break;
  case 80:
    cpu = new slowbro();
    break;
  case 81:
    cpu = new magnemite();
    break;
  case 82:
    cpu = new magneton();
    break;
  case 83:
    cpu = new farfetchD();
    break;
  case 84:
    cpu = new doduo();
    break;
  case 85:
    cpu = new dodrio();
    break;
  case 86:
    cpu = new seel();
    break;
  case 87:
    cpu = new dewgong();
    break;
  case 88:
    cpu = new grimer();
    break;
  case 89:
    cpu = new muk();
    break;
  case 90:
    cpu = new shellder();
    break;
  case 91:
    cpu = new cloyster();
    break;
  case 92:
    cpu = new gastly();
    break;
  case 93:
    cpu = new haunter();
    break;
  case 94:
    cpu = new haunter();
    break;
  case 95:
    cpu = new onix();
    break;
  case 96:
    cpu = new drowzee();
    break;
  case 97:
    cpu = new hypno();
    break;
  case 98:
    cpu = new krabby();
    break;
  case 99:
    cpu = new kingler();
    break;
  case 100:
    cpu = new voltorb();
    break;
  case 101:
    cpu = new electrode();
    break;
  case 102:
    cpu = new exeggcute();
    break;
  case 103:
    cpu = new exeggutor();
    break;
  case 104:
    cpu = new cubone();
    break;
  case 105:
    cpu = new marowak();
    break;
  case 106:
    cpu = new hitmonlee();
    break;
  case 107:
    cpu = new hitmonchan();
    break;
  case 108:
    cpu = new lickitung();
    break;
  case 109:
    cpu = new koffing();
    break;
  case 110:
    cpu = new weezing();
    break;
  case 111:
    cpu = new rhyhorn();
    break;
  case 112:
    cpu = new rhydon();
    break;
  case 113:
    cpu = new chansey();
    break;
  case 114:
    cpu = new tangela();
    break;
  case 115:
    cpu = new kangaskhan();
    break;
  case 116:
    cpu = new horsea();
    break;
  case 117:
    cpu = new seadra();
    break;
  case 118:
    cpu = new goldeen();
    break;
  case 119:
    cpu = new seaking();
    break;
  case 120:
    cpu = new staryu();
    break;
  case 121:
    cpu = new starmie();
    break;
  case 122:
    cpu = new mrMime();
    break;
  case 123:
    cpu = new scyther();
    break;
  case 124:
    cpu = new jynx();
    break;
  case 125:
    cpu = new electabuzz();
    break;
  case 126:
    cpu = new magmar();
    break;
  case 127:
    cpu = new pinsir();
    break;
  case 128:
    cpu = new tauros();
    break;
  case 129:
    cpu = new magikarp();
    break;
  case 130:
    cpu = new gyarados();
    break;
  case 131:
    cpu = new lapras();
    break;
  case 132:
    cpu = new ditto();
    break;
  case 133:
    cpu = new eevee();
    break;
  case 134:
    cpu = new vaporeon();
    break;
  case 135:
    cpu = new jolteon();
    break;
  case 136:
    cpu = new flareon();
    break;
  case 137:
    cpu = new porygon();
    break;
  case 138:
    cpu = new omanyte();
    break;
  case 139:
    cpu = new omastar();
    break;
  case 140:
    cpu = new kabuto();
    break;
  case 141:
    cpu = new kabutops();
    break;
  case 142:
    cpu = new aerodactyl();
    break;
  case 143:
    cpu = new snorlax();
    break;
  case 144:
    cpu = new articuno();
    break;
  case 145:
    cpu = new zapdos();
    break;
  case 146:
    cpu = new moltres();
    break;
  case 147:
    cpu = new dratini();
    break;
  case 148:
    cpu = new dragonair();
    break;
  case 149:
    cpu = new dragonite();
    break;
  case 150:
    cpu = new mewtwo();
    break;
  case 151:
    cpu = new mew();
    break;
  }
  unsigned iv1[4];
  unsigned iv2[4];
  unsigned level1 = rand() % 100 + 1;
  unsigned level2 = rand() % 100 + 1;
  for (int i = 0; i < 4; i++) {
    iv1[i] = rand() % 16 + 1;
    iv2[i] = rand() % 16 + 1;
  }
  player = new pokemon(*trainer, iv1, level1);
  opponent = new pokemon(*cpu, iv2, level2);
}

