/* Arena file for the battle.
 * The idea is for the two Pokemon to fight until one dies.
 * 0 = player's turn, 1 = cpu's turn
 */

#include "pokedex.h"
#include "pokemon.h"

class arena {
 public:
  arena();
  void play();
  void generatePokemon();
  void takeTurn();
  ~arena();
 private:
  pokedex p;
  pokeStat* trainer;
  pokeStat* cpu;
  pokemon* player;
  pokemon* opponent;
  //pokemon trainer[6];
  //pokemon cpu[6];
};
