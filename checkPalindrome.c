#include <stdio.h>
//Check The Palindrome Number
int main(){
    int num, original, reverse =0, lastDigit;

    printf("Enter a Number: ");
    scanf("%d", &num);
    
    original = num;

    while(num != 0){
        lastDigit = num % 10;  // 
        reverse = z * 10 + lastDigit;  
        num = num / 10;   //remove last digit
    }

    if (reverse == original){
        printf("This is a Palindrome.\n");
    }
    else{
        printf("Not a Palindrome.");
    }
}