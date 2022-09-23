#include "task2.h"

// Returns the number with the largest sequence and writes the length to maxlen
unsigned int seqCollatz(unsigned int* maxlen) { 
	unsigned int currentlen = 0;
	int num = 0;
	
	for (int i = 2; i <= 1000000; i++) {
		currentlen = collatz(i);
		if (currentlen > *maxlen) {
			*maxlen = currentlen;
			num = i;
		}
	}
	return num;
}

// Return the length of the Colatz sequence for a specific number
unsigned int collatz(unsigned long long num) {  

	if (num == 1)
		return 1;
	else if (num % 2 != 0)
		return 1 + collatz(num * 3 + 1);
	else if (num % 2 == 0)
		return 1 + collatz(num / 2);
}