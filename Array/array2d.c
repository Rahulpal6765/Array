#include<stdio.h>
void storetable(int arr[][10], int n, int m, int number){
    for (int i = 0; i<m; i++){
       arr[n][i] = number *(i+1);
    }
}
int main(){
    // table of 2 and 3
    int table[2][10];
    storetable(table, 0, 10, 2);
   
       for (int i = 0; i<10; i++){
       printf("%d\t", table[0][i]);  
       
     }
     storetable(table, 1, 10, 3);
     for (int i = 0; i<10; i++){
       printf("%d\t", table[1][i]);  
       
     }
       
       return 0;
    }
 
