#include "pokedex.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
  For type parameter, sorting by:
  1 = Alphabetical Order
  2 = Pokedex number
*/

//this is a very hacky way of making a pokedex, looking for a more efficient way
//to do this.
pokedex::pokedex() {
  size = 9;
  m_pokedex[0] = new bulbasaur();
  m_pokedex[1] = new ivysaur();
  m_pokedex[2] = new venusaur();
  m_pokedex[3] = new charmander();
  m_pokedex[4] = new charmeleon();
  m_pokedex[5] = new charizard();
  m_pokedex[6] = new squirtle();
  m_pokedex[7] = new wartortle();
  m_pokedex[8] = new blastoise();
}

void pokedex::print() {
  cout << "Name" << setw(15) << "\t\t" << "Type" << endl;
  for (int i = 0; i < size; i++)
    cout << m_pokedex[i] -> getName() << setw(15) << "\t\t" << m_pokedex[i] -> getType1().getName() << endl;
}

void pokedex::showEntry(int i) {
  cout << m_pokedex[i-1] -> getName() << setw(15) << "\t"  << "#: " << m_pokedex[i-1] -> getNum() + 1 << '\n' << 
    m_pokedex[i-1] -> getDesc() << '\n' << "Base stats:" << endl;
  cout << "HP: "<< m_pokedex[i-1] -> getBaseHP() << '\n' << 
    "Attack: " << m_pokedex[i-1] -> getBaseAtk() << '\n' <<
    "Defense: " << m_pokedex[i-1] -> getBaseAtk() << '\n';
}

void pokedex::sortBy(int i) {
  sort(i, 0, size - 1);
}

//merge sort using a temp array. Looking for a way to not require it.
void pokedex::merge(int type, int left, int mid, int right) {
  int left_end = mid - 1, temp_pos = left, num_elements = right - left + 1;
  switch(type) {
  case 1:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getName() <= m_pokedex[mid] -> getName()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    while (left <= left_end) {
      temp[temp_pos] = m_pokedex[left];
      left++;
      temp_pos++;
    }
    while (mid <= right) {
      temp[temp_pos] = m_pokedex[mid];
      mid++;
      temp_pos++;
    }
    break;
  case 2:
    while (left <= left_end && mid <= right) {
      if (m_pokedex[left] -> getNum() <= m_pokedex[mid] -> getNum()) {
	temp[temp_pos] = m_pokedex[left];
	temp_pos++;
	left++;
      }
      else {
	temp[temp_pos] = m_pokedex[mid];
	temp_pos++;
	mid++;
      }
    }
    while (left <= left_end) {
      temp[temp_pos] = m_pokedex[left];
      left++;
      temp_pos++;
    }
    while (mid <= right) {
      temp[temp_pos] = m_pokedex[mid];
      mid++;
      temp_pos++;
    }
  }
  for (int i = 0; i < num_elements; i++) {
    m_pokedex[right] = temp[right];
    right--;
  }
}

void pokedex::sort(int type, int start, int end) {
  if (end > start) {
    int mid = (start + end) / 2;
    sort(type, start, mid);
    sort(type, mid+1, end);
    merge(type, start, mid+1, end);
  }
}

pokedex::~pokedex() {
  for(int i = 0; i < size; i++)
    delete m_pokedex[i];
}
