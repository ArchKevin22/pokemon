/* Type Database 
 * All the types are based off Gen II.
 * TODO:
 * Find a better implementation of effectiveness as a bunch of if-else statements isn't very
 * efficient.
 * Find a better implementation of types in general
 */
#include "typedb.h"

type::type(string s) {
    name = s;
}

bool type::operator==(type other) {
  return name == other.getName();
}

double type::effectiveness(string s) {
  if (s == "NULL")
    return 1;
  if (name == "fire") {
    if (s == "rock" || s == "fire" || s == "water" || s == "dragon")
      return 0.5;
    else if (s == "grass" || s == "ice" || s == "bug" || s == "steel")
      return 2;
  }
  if (name == "water") {
    if (s == "grass" || s == "water" || s == "dragon")
      return 0.5;
    else if (s == "ground" || s == "rock" || s == "fire")
      return 2;
  }
  if (name == "grass") {
    if (s == "flying" || s == "poison" || s == "bug"
	|| s == "steel" || s == "fire" || s == "grass" || s == "dragon")
      return 0.5;
    else if (s == "ground" || s == "rock" || s == "water")
      return 2;
  }
}
string type::getName() { return name; }
