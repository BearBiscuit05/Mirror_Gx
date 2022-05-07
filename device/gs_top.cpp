#include "gs_top.h"
#include <assert.h>
void gs_top(
		int*	A,
		int*	B,
		int		num)
{
	int tmp[4];
	assert(num % 2 == 0);
	loop:
	for(int i = 0 ; i < 4 ; i++) {
		tmp[i] = A[i] + B[i];
	}
	for(int i = 0 ; i < 4 ; i++) {
		B[i] = tmp[i];
	}
}
