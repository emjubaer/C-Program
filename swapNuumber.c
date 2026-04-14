#include <stdio.h>
//swap the number using function

void swap( int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int num1, num2;

    printf("Enter Two Number: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping Num1 = %d and Num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping Num1 = %d, Num2 = %d", num1, num2);

}
