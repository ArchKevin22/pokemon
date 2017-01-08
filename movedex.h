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
  attack* getEntryAt(int i);
  void showEntry(int i);
  void viewer();
  void sortBy(int i);
  void sort(int type, int start, int end);
  void merge(int type, int start, int mid, int end);
private:
  int size;
  vector<attack*> movePool;
};

#endif
