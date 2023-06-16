#include <stdio.h>

int is_palindrome(int num) {
	int reversedNum = 0;
	int originalNum = num;

	while (num > 0) 
	{
		int remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}

	return originalNum == reversedNum;
}

int main() {
	int largest_palindrome = 0;


	for (int i = 999; i >= 100; i--) {
		for (int j = i; j >= 100; j--) {
			int product = i * j;
			if (product > largest_palindrome && is_palindrome(product)) {
				largest_palindrome = product;
			}
		}
	}


	FILE *file = fopen("102-result", "w");
	if (file != NULL) {
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}

	return 0;
}
