#define _CRT_SECURE_NO_WARNINGS

#include "task5.h"
#include <stdio.h>
#include <time.h>

int main() {
	int N = 0;
	unsigned long long numFib = 0;
	clock_t begin = 0.0;
	clock_t end = 0.0;
	double timeSpent = 0.0;
	FILE* file;

	printf("Enter sequence length: ");
	scanf("%d", &N);

	file = fopen("C-Lab6-(task5).txt", "w");

	for (int i = 0; i <= N; i++) {
		begin = clock();
		numFib = fib1(i);
		end = clock();
		timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
		printf("Sequence number - %d\tFibonachi number - %llu\tElapsed time - %.16f\n", i, numFib, timeSpent);
		fprintf(file, "Sequence number - %d\tFibonachi number - %llu\tElapsed time - %.16f\n", i, numFib, timeSpent);
		numFib = 0;
	}
	return 0;
}