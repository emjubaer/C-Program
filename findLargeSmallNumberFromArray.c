#include <stdio.h>
//Find Largest and Smallest number from an array

int main(){
    int arr[100], n, i;
    int smallest, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    largest = arr[0];

    for (i=1; i<n; i++){
        if (arr[i] > largest){
            largest= arr[i];
        }
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }

    printf("The Largest Number is: %d\n", largest);
    printf("The Smallest Number is: %d\n", smallest);

}
