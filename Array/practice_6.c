//Creat an array of size 3 X 10 containing multiplication table of number 2, 7, and 9 respectively.

#include<stdio.h>

void printTable(int arr[][10], int n, int number);

int main(){
    // int number;
    // printf("Enter the number : ");
    // scanf("%d", &number);
    
    int arr[3][10];
    printTable(arr, 0, 2);
    printTable(arr, 1, 3);
    printTable(arr, 2, 9);
    return 0;
}

void printTable(int arr[][10], int n, int number){

    printf("Table of %d\n", number);
    for (int i = 0; i <10; i++){
        arr[n][10] = number*(i+1);
        
        printf("%d X %d = %d\n", number, (i+1), arr[n][10]);
    }
}
