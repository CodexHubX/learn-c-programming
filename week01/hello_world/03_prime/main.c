#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int is_prime(int num);


int main(void) {
	
	while (1) {
		int checknumber;
		printf("Input your number : ");
		scanf("%d", &checknumber);
		int result = is_prime(checknumber);

		if (result) {

			printf("%d", checknumber);
			printf(" is a prime number.\n");
		}
		else {
			printf("%d", checknumber);
			printf(" is not a prime number.\n");
		}
	}

	return 0;
}

int is_prime(int n) {
	if (n < 2) return 0;

	for (int i = 2; i < n; i++) {
		if (n % i == 0) return 0;
	}

	return 1;
}