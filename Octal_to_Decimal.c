#include <stdio.h>
#include <math.h>

long long Octal_to_Dec(int octal){
    int decimal = 0, i = 0;
    
    while(octal != 0){
        decimal = decimal + (octal % 10) * pow(8, i);
        ++i;
        octal = octal / 10;
    }
    i = 1;
    return decimal;
}

int main(){
    int octal;
    
    printf("Enter an Octal Number: ");
    scanf("%d", &octal);
    printf("The decimal value of %d (octal) is %lld", octal, Octal_to_Dec(octal));
    return 0;
}
