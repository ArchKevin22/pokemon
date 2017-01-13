/* Arena file for the battle.
 * The idea is for the two Pokemon to fight until one dies.
 * 0 = player's turn, 1 = cpu's turn
 */

#include "pokedex.h"
#include "pokemon.h"
#include "movedex.h"

class arena {
 public:
  arena();
  void intro();
  void play();
  void generatePokemon();
  void takeTurn();
  ~arena();
 private:
  pokedex p;
  movedex h1;
  movedex h2;
  pokeStat* trainer;
  pokeStat* cpu;
  pokemon* player;
  pokemon* opponent;
  //pokemon trainer[6];
  //pokemon cpu[6];
};
