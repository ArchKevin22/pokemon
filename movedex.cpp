#include "movedex.h"

movedex::movedex() {
  size = 10;
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
