/* This is like a pokedex, but for moves.
 * Can be sorted by power or name.
 * 1 = alphabetical order, 2 = power
 */

#include "movedb.h"
#include <vector>
using namespace std;

#ifndef MOVEDEX_H
#define MOVEDEX_H

struct movedex {
public:
  movedex();
  void print();
  attack getEntryAt(int i);
  void printEntryAt(int i);
  void sortBy(int i);
  void sort(/*insert variables here*/);
  void merge(/*insert variables here*/);
private:
  vector<attack*> movePool;
};

#endif
