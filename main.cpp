/* Main.cpp runs the entire thing */

#include <string>
#include <iostream>
#include "pokemon.h"
#include "pokedb.h"
#include "typedb.h"
#include "pokedex.h"
#include "movedb.h"
using namespace std;

int main() {
  pokedex f;
  f.showEntry(1);
  unsigned iv[] = {4, 4, 4, 4};
  pokemon p1(squirtle(), iv, 6, 0);
  int a = p1.getHP();
  cout << "HP is " << a << endl;
  p1.takeDamage(1);
  int b = p1.getHP();
  cout << "new HP is " << b << endl;
  p1.takeDamage(99);
  b = p1.getHP();
  cout << "new HP is " << b << endl;
  if (p1.getStatus() == 6)
    cout << p1.getNickName() << " has fainted" << endl;
}
