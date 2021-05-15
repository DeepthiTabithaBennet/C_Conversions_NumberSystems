#include <stdio.h>
#include <math.h>

int Dec_to_Octal(int decimal){
    int octal = 0, i = 1;
    
    while (decimal != 0){
        octal = octal + (decimal % 8) * i;
        decimal = decimal / 8;
        i = i * 10;
    }
    return octal;
}

int main(){
    int decimal;
    printf("Enter a Decimal Number: \n");
    scanf("%d", &decimal);
    
    printf("The Octal value of %d (decimal) is %d", decimal, Dec_to_Octal(decimal));
    
    return 0;
}
