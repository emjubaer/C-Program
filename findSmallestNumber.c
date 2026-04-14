#include <stdio.h>
//find the smallest number among three numbers
int main(){
    int num1, num2, num3;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1<num2 && num1<num3){
        printf("The smallest number is: %d", num1);
    }
    else if (num2<num1 && num2<num3){
        printf("The smallest Number is: %d", num2);
    }
    else{
        printf("The smallest number is: %d", num3);
    }
}