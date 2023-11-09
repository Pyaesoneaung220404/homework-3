#include <stdio.h>

char changeCase(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch + ('a' - 'A');
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - ('a' - 'A');
	}
	else {
		return ch;
	}
}

int main() {
	char input = 'Z';
	char result = changeCase(input);
	printf("Original: %c, Changed: %c\n", input, result);

	return 0;
}