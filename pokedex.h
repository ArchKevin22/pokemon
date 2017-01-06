#ifndef POKEDEX_H
#define POKEDEX_H

#include "pokedb.h"
class pokeStat;

static int NUM = 1;
static int TYPE = 2;
static int NAME = 3;

class pokedex {
 public:
  pokedex();
  pokeStat* getEntryAt(int i);
  void print();
  void showEntry(int i);
  void sortBy(int i);
  void merge(int type, int left, int mid, int right);
  void sort(int type, int start, int end);
  ~pokedex();
 private:
  int size;
  pokeStat* m_pokedex[151];
  pokeStat* temp[151];
};

#endif
