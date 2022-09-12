#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>


//Write a program that translate user input
//integer to string using recursion and without
//any library conversion functions

#define N 11

int main() {

	int num = 0;
	char buf[N];
	
	printf("Enter number: ");
	scanf("%d", &num);

	int2str(buf, num);

	printf("\n");
	for (int i = 0; buf[i] != '\0'; i++) {
		printf("%c", buf[i]);
	}

	return 0;
}