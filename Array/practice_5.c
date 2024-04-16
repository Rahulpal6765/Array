
// Write a program containing a function which count the numbers of positive integers in array.


#include<stdio.h>

void count_positive(int arr[], int n);

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i<n; i++){
     printf("Enter the %d element : ", i+1);
    scanf("%d", &arr[i]);
}
count_positive(arr, n);

}
void count_positive(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>= 0){
            count++;
        }
    }
    printf("The number of positive integers are %d\n", count);
    
}