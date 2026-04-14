#include <stdio.h>
//Sum from a array

int main(){
    int arr[100], n, i, sum=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (i =0; i<n; i++){
        sum += arr[i];
    }

    printf("The sum of the total numbers of the array is: %d", sum);
}
