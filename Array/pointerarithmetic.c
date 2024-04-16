#include<stdio.h>
int main(){
    //CASE 1
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++;      // ptr = ptr-1 /* this 1 means 1 datatype
    // printf("ptr = %u\n", ptr);
    // ptr--;      // ptr = ptr-1 /* this 1 means 1 datatype
    // printf("ptr = %u\n", ptr);

    //CASE 2
    float price = 20.00;
    float *ptr = &price;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    //CASE 3
    // char star = '*';
    // char *ptr = &star;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);
    return 0;
}