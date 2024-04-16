#include<stdio.h>
int main (){
    int aadhaar[10];

    // input
    int *ptr = &aadhaar[0];
    for(int i = 0; i<10; i++){
        printf("aadhaar number of %d index : ", i);
        scanf("%d", (ptr+i));
    }
    
    //output
    for(int i = 0; i<10; i++){
        printf("%d index = %d\n", i, aadhaar[i]);
    }
    
    return 0;

}