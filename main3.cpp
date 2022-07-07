#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

char getText(int n) {
	

	
}


int main() {
	//int i = 0;
	int number = 0;
	int count = 0;
	int buf[10] = {};
	char chTmp;

	printf("Enter number:");
	scanf("%d", &number);
	
	int tmp = number;

	for (int i = 9; tmp > 0; i--) {
		
		int g;
		g = tmp % 10;
		if (g > 0) {
			buf[i] = g;
			count++;
		}		
		//printf(" %d ", buf[i]);
		tmp /= 10;		
	}
	
	//while (tmp > 0) {
	//	tmp /= 10;
	//	count++;
	//}

	printf("\ncount = %d", count);
	

	_getch();
	return 0;
}