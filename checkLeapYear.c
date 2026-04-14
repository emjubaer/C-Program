#include <stdio.h>
//Check whether the year is leap year or not
int main(){
    int year;

    printf("Enter a Year: ");
    scanf("%d", &year);

    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                printf("%d is a leap year.", year);
            }
            else{
                printf("%d is not a leap year.", year);
            }
        }
        else{
            printf("%d is a leap year.", year);
        }
    }
    else{
        printf("%d is not a leap year.", year);
    }
}