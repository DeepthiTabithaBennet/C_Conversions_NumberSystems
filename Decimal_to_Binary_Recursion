#include <stdio.h>

int decimal_to_binary(int n){
	if (n == 1){
		return 1;
	}
	else{
		return(n % 2 + 10 * decimal_to_binary(n / 2));
	}
}

int main() {
	int num;
	scanf("%d", &num);
	printf("%d", decimal_to_binary(num));
	return 0;
}
