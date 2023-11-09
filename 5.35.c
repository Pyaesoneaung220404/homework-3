#include <stdio.h>

int power(int base, int exponent) {
	
	if (exponent == 1) {
		return base;
	}
	else {
	
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base = 3;
	int exponent = 4;

	int result = power(base, exponent);

	printf("%d^%d is: %d\n", base, exponent, result);

	return 0;
}