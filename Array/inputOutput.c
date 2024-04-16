// #include<stdio.h>
// int main (){
//     int marks[3];
//     printf("Enter the marks of Physics: ");
//     scanf("%d", &marks[0]);
//      printf("Enter the marks of chemistry: ");
//     scanf("%d", &marks[1]);
//      printf("Enter the marks of maths: ");
//     scanf("%d", &marks[2]);
//     printf("Physics = %d, chemistry = %d, maths = %d\n", marks[0], marks[1], marks[2]);
//     return 0;
// }
#include<stdio.h>

int main(){
    int marks[4];
    printf("Enter the marks of student 1 : ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2 : ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3 : ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4 : ");
    scanf("%d", &marks[3]);

    printf("You have entered %d, %d, %d and %d\n", marks[0], marks[1], marks[2], marks[3]);
    printf("Marks of student 1 is %d\n", marks[0]);
    printf("Marks of student 2 is %d\n", marks[1]);
    printf("Marks of student 3 is %d\n", marks[2]);
    printf("Marks of student 4 is %d\n", marks[3]);
    return 0;
}