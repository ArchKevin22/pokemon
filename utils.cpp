#include "utils.h"

int random_int_in_range( int first, int last ) {
  /* This function implements the method recommended by the knowing
   * folks at comp.lang.c: http://c-faq.com/lib/randrange.html
   * Returns an integer in [first, last].
   */
  unsigned int N = (last - first <= RAND_MAX)  /* Make sure the algorithm    */
                 ? (last - first + 1U)         /* terminates by keeping N    */
                 : (RAND_MAX + 1U);            /* in rand()'s maximum range. */
  unsigned int x = (RAND_MAX + 1U) / N;
  unsigned int y = x * N;
  unsigned int r;
  do {
    r = rand();
  } while (r >= y);
  return r / x + first;
}
