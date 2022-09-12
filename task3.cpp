#include "task3.h"

char* int2str(char* buf, unsigned int value) {

	char* ptr;

	if (value / 10 == 0) {
		*buf = value % 10 + 48;
		return buf + 1;
	}
	else {
		ptr = int2str(buf, value / 10);
		*ptr = value % 10 + 48;
		return ptr + 1;
	}
}