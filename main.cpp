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
	printf("sum cicle: %d", sumC(arr, len));

	//printf("\n\n");
	//printf("sum recursion: ", sumR(arr, len));
}


// Write a program that sums an array in the traditional (cyclic)
// and recursive ways