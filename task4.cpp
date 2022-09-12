#include "task4.h"

long long sumC(char* arr, int len) {

	short num;
	long long sum = 0;

	for (int i = 0; i < len; i++) {
		num = arr[i] - 48;
		sum += num;
	}
	return sum;
}

long long sumR(char* arr, int len) {



}