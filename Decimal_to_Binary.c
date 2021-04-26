#include <stdio.h>

long decimal_to_Binary(int decimalnum){

	long binarynum = 0;
	int mod, place = 1;
	

	while (decimalnum != 0){
	
		mod = decimalnum % 2;
		decimalnum = decimalnum / 2;
		binarynum = binarynum + (mod * place);
		place = place * 10;
	}
	return binarynum;
}



int main(){

	int decimalnum;
	scanf("Enter a Decimal number : %d", &decimalnum);
	printf("Equivalent Binary Number is: %ld", decimal_to_Binary(decimalnum));
	return 0;
}
