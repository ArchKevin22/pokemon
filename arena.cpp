#include "arena.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

arena::arena() {
 
}

void arena::intro() {
  int a;
  cout << "Press 1 to face an opponent or 2 to view the pokedex" << endl;
  cin >> a;
  while (a != 1 && a != 2) {
    cout << "Invalid input, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> a;
  }
  switch(a) {
  case 1:
    play();
    break;
  case 2:
    p.viewer();
  }
}

arena::~arena() {
}

void arena::play() {
  generatePokemon();
  cout << player->getNickName() << " level " << player->getLevel()
       << " vs. " << opponent->getNickName() << " level " << opponent->getLevel() << endl;
  cout << "You are " << player->getNickName() << '\n' << endl;
  cout << "---------------------------" << endl;
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
      if (opponent->getHP() > 0) {
	cout << opponent->getNickName() << " used " << opponent->getMove(b)->getName() << "!" << endl;
	opponent->getMove(b)->useMove(opponent, player);
      }
    }
    else {
      cout << opponent->getNickName() << " used " << opponent->getMove(b)->getName() << "!" << endl;
      opponent->getMove(b)->useMove(opponent, player);
      if (player->getHP() > 0) {
	cout << player->getNickName() << " used " << player->getMove(a)->getName() << "!" << endl;
	player->getMove(a)->useMove(player, opponent);
      }
    }
    cout << "---------------------------" << endl;
  }
  cout << player->getNickName() << " HP: " << player->getHP() << endl;
  cout << opponent->getNickName() << " HP: " << opponent->getHP() << endl;
  cout << "---------------------------" << endl;
  if (player->getHP() == 0) 
    if (opponent->getHP() == 0) 
      cout << "It ended in a draw!" << endl;
    else
      cout << "The opponent won!" << endl;
  else
    cout << "You won!" << endl;
}



void arena::generatePokemon() {
  int a[2];
  srand(time(NULL));
  a[0] = rand() % 151 + 1;
  a[1] = rand() % 151 + 1;
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
  player->makeMoveset();
  opponent->makeMoveset();
}

