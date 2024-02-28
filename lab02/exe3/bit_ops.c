#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
	// order to find the Nth bit we can use the & (and operrtor) and >> (right shit).
    
	return (x >> n) & 1;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
	// we can do this by making the both value left shit to nth place and then
	// we take OR and then NOT and finally take the AND  with the *x and store in it.
	*x = (*x & ~(1 << n)) | (v << n);
}
/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {

 	*x ^= (1 << n);
}