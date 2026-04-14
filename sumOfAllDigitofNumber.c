#include <stdio.h>
//Sum of all the digit of a number

int main(){
    int num, sum = 0, lastDigit;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while( num != 0){
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10; 
    }

    printf("The Sum is: %d", sum);
}