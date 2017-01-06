#include "arena.h"
#include <cstdlib>
#include <ctime>
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
  cout << player->getNickName() << " level " << player->getLevel()
       << " vs. " << opponent->getNickName() << " level " << opponent->getLevel() << endl;
  cout << "------------------------" << endl;
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
    cout << "---------------------------" << endl;
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
  srand(time(NULL));
  a[0] = rand() % 151;
  a[1] = rand() % 151;
  trainer = p.getEntryAt(a[0]);
  cpu = p.getEntryAt(a[1]);
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

