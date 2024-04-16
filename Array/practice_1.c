#include<stdio.h>
int main(){
    int arr[3];
    int *ptr = &arr[0];
//     for (int i = 0; i<10; i++){
//         printf("Enter the %d number : ", i+1);
//     scanf("%d", &arr[i]);
// }
ptr = ptr +2;
if (&arr[2] == ptr){
    printf("Hence verified");
}
}
