#include "sum.h"

int sum(int n) {
	int total = 0;
	for(int i = 0; i <= n; i++) {
		total += i;
	}

	return total;

	//return (n * (n+1)) / 2;
}
