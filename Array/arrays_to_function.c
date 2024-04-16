#include<stdio.h>
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("The element of array is : %d\n", (arr[n] +i));
    }
}
int main(){

    int arr[] = {72,89,81,67,65};
    printArray(arr, 5);
    return 0;
}