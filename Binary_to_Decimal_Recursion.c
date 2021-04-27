#include <stdio.h>

int binary_to_decimal (int num){
	if (!(num / 10)){
	return (num);
	}
	else{
	return (num % 10 + binary_to_decimal(num / 10) * 2);
	}
}

int main(){
	int num;
	scanf("%d", &num);
	printf("%d", binary_to_decimal(num));
	return 0;
}
