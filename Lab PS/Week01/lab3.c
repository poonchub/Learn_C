#include <stdio.h>
#include <math.h>
int main(void){
    int time;
    float price,rate;
    printf("Please enter the purchase price: ");
    scanf("%f",&price);
    printf("Please enter the annual interest rate: ");
    scanf("%f",&rate);
    printf("Please enter the total number of payments: ");
    scanf("%d",&time);
    printf("******************************\n");

    float i = rate/12.0;
    float P = price-500;
    float MI = (i*P)/(1.0-pow(1.0+i,-time));
    printf("The amount borrowed: $%.2f\n",P);
    printf("The monthly payment: $%.2f",MI);




}