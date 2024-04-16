// Write a program to enter the price of three items and print their final cost with gst//

#include<stdio.h>

int main(){
    float price[3];
    printf("Enter the price of first item : ");
    scanf("%f", &price[0]);

    printf("Enter the price of second item : ");
    scanf("%f", &price[1]);

    printf("Enter the price of third item : ");
    scanf("%f", &price[2]);

    printf("The final price of first item is %f\nsecond item is %f\nthird item is %f\n", price[0] + (price[0]*0.18), price[1] + (price[1]*0.18), price[2] + (price[2]*0.18));
    return 0;
}