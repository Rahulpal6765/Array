// #include<stdio.h>
//  void printNumbers(int arr[], int n);
//  int main (){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);
//     return 0;
//  }

//  void printNumbers(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
//  }
#include<stdio.h>
int countOdd(int arr[], int n);
int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d\n", *(arr + 2) );
    printf("%d\n", *(arr + 5) );
}
int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
    if(arr[i] %2!=0){
        count++;
    }
     }
     printf("%d\n", count);
}