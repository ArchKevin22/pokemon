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
  unsigned iv[] = {1, 2, 3, 4};
  pokemon c(charmander(), iv, 10);
  c.printMoves();
}
