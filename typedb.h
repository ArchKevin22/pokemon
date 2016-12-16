#ifndef TYPEDB_H
#define TYPEDB_H

#include <string>
using namespace std;

class type {
 public:
  type(string s);
  bool operator==(type other);
  double effectiveness(string s);
  string getName();
 private:
  string name;
};

#endif
