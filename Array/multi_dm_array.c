#include<stdio.h>

int main(){ 
    int arr[3][5];// i = student j = marks arr = marks
    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            printf("Enter the marks of student %d in subject %d ",i + 1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            printf("The marks of student %d in subject %d is %d\n", i + 1, j+1, arr[i][j]);
        }
    }
    return 0;
}
