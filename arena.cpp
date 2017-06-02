#include "arena.h"
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <random>
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
    showTutorial();
    play();
    break;
  case 2:
    p.viewer();
  }
}

arena::~arena() {
}

void arena::showTutorial() {
  cout << "The player (you) will battle 1v1 against the computer. \n"
       << "Your objective is to defeat the other player's Pokemon. \n"
       << "To use a move, type 1-4 to use the corresponding move. \n"
       << "Once a Pokemon's HP goes to zero, the game is over." << endl;
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
    int b = random_int_in_range(1, 4) + 1;
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
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  a[0] = random_int_in_range(1, 151) + 1;
  a[1] = random_int_in_range(1, 151) + 1;
  trainer = p.getEntryAt(a[0]);
  cpu = p.getEntryAt(a[1]);
  default_random_engine generator(seed);
  normal_distribution<double> distribution(50, 5);
  unsigned iv1[4];
  unsigned iv2[4];
  unsigned level1 = distribution(generator);
  unsigned level2 = distribution(generator);
  for (int i = 0; i < 4; i++) {
    iv1[i] = random_int_in_range(1, 16) + 1;
    iv2[i] = random_int_in_range(1, 16) + 1;
  }
  player = new pokemon(*trainer, iv1, level1);
  opponent = new pokemon(*cpu, iv2, level2);
  player->makeMoveset();
  opponent->makeMoveset();
}
