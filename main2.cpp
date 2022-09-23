//Write a program that finds in the range of integers 
//from 2 to 1000000 number forming the longest Collatz sequence

#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>

int main() {
	unsigned int maxlen = 0;
	int highSeqNum = 0;

	highSeqNum = seqCollatz(&maxlen);

	printf("The number with the highest sequence - %d\tsequence length - %u", highSeqNum, maxlen);

	return 0;
}