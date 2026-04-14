#include <stdio.h>
//find the largest number among three numbers
int main(){
    int num1, num2, num3, i;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1>num2 && num1>num3){
        printf("The largest number is: %d", num1);
    }
    else if (num2>num1 && num2>num3){
        printf("The largest Number is: %d", num2);
    }
    else{
        printf("The largest number is: %d", num3);
    }
}