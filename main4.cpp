#pragma comment(linker, "/STACK:256000000")
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
	}

	printf("\n");

	clock_t begin = clock();
	sum_c = sumC(arr, len);
	clock_t end = clock();
	time_spent_c += (double)(end - begin) / CLOCKS_PER_SEC;

	begin = clock();
	sum_r = sumR(arr, len);
	end = clock();
	time_spent_r += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\nThe amount calculated by the cyclic method: %lld", sum_c);
	printf("\nThe amount calculated by the recursion method: %lld\n", sum_r);

	if (time_spent_r > time_spent_c)
		printf("\nRecursion time is longer than loop time\n\nRecursion time\t= %.17f\nLoop time\t= %.17f",
			time_spent_r, time_spent_c);
	else if (time_spent_c > time_spent_r)
		printf("\nLoop time is longer than recursion time\n\nLoop time\t= %.17f\nRecursion time\t= %.17f",
			time_spent_c, time_spent_r);
	else
		printf("\nRecursion time is equal to loop time\n\nRecursion time\t=%.17f\nLoop time\t = %.17f",
			time_spent_r, time_spent_c);

	free(arr);
	return 0;
}


// Write a program that sums an array in the traditional (cyclic)
// and recursive ways, also compares time of summation in
// traditional (cyclic) and recursive ways