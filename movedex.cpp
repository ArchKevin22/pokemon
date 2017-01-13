#include "movedex.h"

movedex::movedex() {
  movePool[0] = new absorb();
  movePool[1] = new acid();
  movePool[2] = new aurora_beam();
  movePool[3] = new barrage();
  movePool[4] = new bite();
  movePool[5] = new blizzard();
  movePool[6] = new body_slam();
  movePool[7] = new bone_club();
  movePool[8] = new bonemerang();
  movePool[9] = new bubble();
  movePool[10] = new bubblebeam();
  movePool[11] = new cut();
  movePool[12] = new double_edge();
  movePool[13] = new drill_peck();
  movePool[14] = new earthquake();
  movePool[15] = new egg_bomb();
  movePool[16] = new ember();
  movePool[17] = new explosion();
  movePool[18] = new fire_blast();
  movePool[19] = new fire_punch();
  movePool[20] = new flamethrower();
  movePool[21] = new gust();
  movePool[22] = new headbutt();
  movePool[23] = new horn_attack();
  movePool[24] = new hydro_pump();
  movePool[25] = new hyper_beam();
  movePool[26] = new hyper_fang();
  movePool[27] = new ice_beam();
  movePool[28] = new ice_punch();
  movePool[29] = new leech_life();
  size = 30;
}

int movedex::getSize() {
  return size;
}

void movedex::print() {

}

attack* movedex::getEntryAt(int i) {
  return movePool[i-1];
}

void movedex::showEntry(int i) {
  
}

void movedex::viewer() {

}

void movedex::sortBy(int i) {
  sort(i, 0, size - 1);
}

void movedex::merge(int type, int left, int mid, int right) {

}

void movedex::sort(int type, int start, int end) {
  if (end > start) {
    int mid = (start + end) / 2;
    sort(type, start, mid);
    sort(type, mid+1, end);
    merge(type, start, mid+1, end);
  }
}

movedex::~movedex() {
  for (int i = 0; i < size; i++) {
    delete movePool[i];
  }
}
