#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main() {

	int degree;
	unsigned int len;
	char* arr;
	double time_spent_c = 0.0;
	double time_spent_r = 0.0;
	long long sum_c = 0;
	long long sum_r = 0;

	printf("Enter the degree of a number: ");
	scanf("%d", &degree);

	len = pow(2, degree);

	arr = (char*)malloc(len * sizeof(char));

	srand(time(NULL));
	for (int i = 0; i < len; i++) {
		arr[i] = rand() % (57 - 48 + 1) + 48;
		printf(" %c ", arr[i]);
	}

	printf("\n");

	clock_t begin = clock();
	sum_c = sumC(arr, len);
	clock_t end = clock();
	time_spent_c += (double)(end - begin);

	printf("sum cycle: %d\ttime cycle = %.16f", sum_c, time_spent_c);

	printf("\n\n");
	printf("sum recursion: %d", sumR(arr, len));
}




// Write a program that sums an array in the traditional (cyclic)
// and recursive ways