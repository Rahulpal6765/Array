// Write a program to create an array of  10 integer and store the multiplication table 
//  of number taken by user

#include<stdio.h>
void printTable (int arr[], int n, int number){
    printf("Table of %d\n", number);
    for (int i = 0; i<10; i++){
        arr[i] = number*(i+1);
        printf("%d X %d = %d\n", number, i+1, arr[i]);
        
    }
    printf("-------------------------------\n");
        
    }
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    int arr[10];
printTable(arr, 0, number);
    
return 0;
}
