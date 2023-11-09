#include <stdio.h>

void hanoi(int n, char source, char target, char temp) {
	if (n > 0) {
		
		hanoi(n - 1, source, temp, target);

		
		printf("Move disk %d from peg %c to peg %c\n", n, source, target);

		
		hanoi(n - 1, temp, target, source);
	}
}

int main() {
	
	int num_disks = 3; 
	char start_peg = 'A';
	char target_peg = 'C';
	char temp_peg = 'B';

	
	hanoi(num_disks, start_peg, target_peg, temp_peg);

	return 0;
}