#include <math.h>
#include <stdio.h>

int binary_to_decimal(long long n);

int main() {
	long long n;
	printf("Enter a binary number: ");
	scanf("%lld", &n);
	printf("\n\n%lld in binary = %d in decimal", n, binary_to_decimal(n));
	return 0;
}

int binary_to_decimal(long long n) {
	int dec = 0, i = 0, rem;
	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return dec;
}
