/* Moves Database 
 * Each move has a power, type, and PP.
 * Max PP can be increased up to 3 times.  
 */

#include "movedb.h"

ember::ember() : attack("ember", 40, 25, "fire") {}

attack::attack() : name("-"), m_type("NULL") {
  m_power = 0;
  max_pp = 0;
  base_pp = 0;
  m_pp = 0;
  pp_increase = 3;
}

attack::attack(string s, unsigned power, unsigned pp, string t) : name(s), m_type(t) {
  m_power = power;
  max_pp = pp;
  base_pp = pp;
  m_pp = pp;
  pp_increase = 3;
}
unsigned attack::getPower() { return m_power; }
type attack::getType() { return m_type; }
string attack::getTypeName() { return m_type.getName(); }
string attack::getName() { return name; }
unsigned attack::getPP() { return m_pp; }
unsigned attack::getMaxPP() { return max_pp; }

//if there is still PP, use the attack
bool attack::useMove() {
  if (m_pp > 0) {
    m_pp--; return 1;
  }
  return 0;
}

//Player either uses an item or heals, restores PP
void attack::heal_pp(unsigned n) {
  m_pp += n;
  if (m_pp > max_pp)
    m_pp = max_pp;
}

bool attack::add_maxpp() {
  if (pp_increase > 0) {
    pp_increase--;
    max_pp += (base_pp / 5);
    return 1;
  }
  return 0;
}
