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
  if (name == "normal") {
    if (s == "rock" || s == "steel")
      return 0.5;
    else if (s == "ghost")
      return 0;
  }
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
  if (name == "fighting") {
    if (s == "normal" || s == "rock" || s == "steel" ||
	s == "ice" || s == "dark")
      return 0.5;
    else if (s == "flying" || s == "poison" || s == "bug" || s == "psychic")
      return 2;
  }
  if (name == "flying") {
    if (s == "rock" || s == "steel" || s == "flying")
      return 0.5;
    else if (s == "fighting" || s == "bug" || s == "grass")
      return 2;
  }
  if (name == "poison") {
    if (s == "poison" || s == "ground" || s == "rock" || s == "ghost")
      return 0.5;
    else if (s == "grass")
      return 2;
    else if (s == "steel")
      return 0;
  }
  if (name == "ground") {
    if (s == "bug" || s == "grass")
      return 0.5;
    else if (s == "poison" || s == "rock" || s == "steel"
	     || s == "fire" || s == "electric")
      return 2;
    else if (s == "flying")
      return 0;
  }
  if (name == "rock") {
    if (s == "fighting" || s == "ground" || s == "steel")
      return 0.5;
    else if (s == "flying" || s == "bug" || s == "fire" || s == "ice")
      return 2;
  }
  if (name == "bug") {
    if (s == "fighting" || s == "flying" || s == "poison"
	|| s == "ghost" || s == "steel" || s == "fire")
      return 0.5;
    else if (s == "grass" || s == "psychic" || s == "dark")
      return 2;
  }
  if (name == "ghost") {
    if (s == "dark")
      return 0.5;
    else if (s == "ghost" || s == "psychic")
      return 2;
    else if (s == "normal")
      return 0;
  }
  if (name == "steel") {
    if (s == "steel" || s == "fire" || s == "water" || s == "electric")
      return 0.5;
    else if (s == "rock" || s == "ice")
	return 2;
  }
  if (name == "electric") {
    if (s == "grass" || s == "electric" || s == "dragon")
      return 0.5;
    else if (s == "flying" || s == "water")
      return 2;
    else if (s == "ground")
      return 0;
  }
  if (name == "psychic") {
    if (s == "steel" || s == "psychic")
      return 0.5;
    else if (s == "fighting" || s == "poison")
      return 2;
    else if (s == "dark")
      return 0;
  }
  if (name == "ice") {
    if (s == "steel" || s == "fire" || s == "water" || s == "ice")
      return 0.5;
    else if (s == "flying" || s == "ground" || s == "grass" || s == "dragon")
      return 2;
  }
  if (name == "dragon") {
    if (s == "steel")
      return 0.5;
    else if (s == "dragon")
      return 2;
  }
  if (name == "dark") {
    if (s == "fighting" || s == "dark")
      return 0.5;
    else if (s == "ghost" || s == "psychic")
      return 2;
  }
  return 1;
}
string type::getName() { return name; }
