// Write a program to print table of 2 and 5

// #include<stdio.h>
// void printTable (int arr[], int n, int number){
//     printf("Table of %d\n", number);
//     for (int i = 0; i<10; i++){
//         arr[i] = number*(i+1);
//         printf("%d X %d = %d\n", number, i+1, arr[i]);
        
//     }
//     printf("-------------------------------\n");
        
//     }
// int main(){
    // int arr[10];
    // printTable(arr, 0, 2);
    // printTable(arr, 0, 3);
    // printTable(arr, 0, 5);
    
// return 0;
// }
#include<stdio.h>
int main(){
    int n =2, a = 5;
    int arr[10];
    for (int i = 0; i<10; i++){
    arr[i] = a*(i+1);
    printf("%d X %d = %d\n", a, i+1, arr[i]);
    
    }
    for (int i = 0; i<10; i++){
    arr[i] = n*(i+1);
    printf("%d X %d = %d\n", n, i+1, arr[i]);
    
    }
return 0;
}
