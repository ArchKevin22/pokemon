/* Arena file for the battle.
 * The idea is for the two Pokemon to fight until one dies.
 * 0 = player's turn, 1 = cpu's turn
 */

#include "pokemon.h"

class arena {
 public:
  arena();
  void play();
  void generatePokemon();
  void takeTurn();
  ~arena();
 private:
  pokeStat* trainer;
  pokeStat* cpu;
  pokemon* player;
  pokemon* opponent;
  //pokemon trainer[6];
  //pokemon cpu[6];
};
