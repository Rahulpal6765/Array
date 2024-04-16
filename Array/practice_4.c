// write a prgram containing function which reverse the array passed to it.

#include<stdio.h>
void reverse_array();
void print_array();

int main(){
    int n = 11;
    int arr[11]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // for (int i = 0; i<n; i++){
    //     printf("Enter the %d element : ", i+1);
    //     scanf("%d", &arr[i]);
    // }
    reverse_array(arr, n);
    print_array(arr,n);

    return 0;
}
void reverse_array(int arr[], int n){
for(int i = 0; i<(n/2); i++){
// int first_value = arr[i];
// int second_value = arr[n-i-1];
//  arr[n-i-1] = first_value;
//  arr[i] = second_value;
int tem = arr[i];
arr[i] = arr[n-i-1];
arr[n-i-1] = tem;
}
}
void print_array(int arr[], int n){
    for(int i = 0; i<(n); i++){
    printf("%d\t", arr[i]);
}
}