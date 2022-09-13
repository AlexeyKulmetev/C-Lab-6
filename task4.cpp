#include "task4.h"

long long sumC(char* arr, int len) {

	long long sum = 0;

	for (int i = 0; i < len; i++) {
		sum += arr[i] - 48;
	}
	return sum;
}


long long sumR(char* arr, int len) {

	if (len == 1) {
		return *arr - 48;
	}
	else {
		return (* arr - 48) + sumR(arr + 1, len - 1);
	}		
}