#include <stdio.h>

int main() {
  int a=1, n;
  float bal = 10000, dep = 0, wit;
  
  while (a>0){
    printf("Menu:\n");
    printf("1 - Balance\n");
    printf("2 - Deposit\n");
    printf("3 - Withdrawn\n");
    printf("0 - Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    if (n>=0 && n<=3){
        if (n==1){
            printf("Your available balance: %.2f\n",bal);
        } 
        else if (n==2){
            printf("Enter the deposit: ");
            scanf("%f",&dep);
            if (dep>0){
                bal += dep;
            }
            else{
                printf("The minimum deposit amount must be more than zero!!!\n");
            }
        }
        else if (n==3){
            printf("Enter the withdrawn amount");
            scanf("%f",&wit);
            if (wit<=bal){
                bal -= wit;
            }
            else{
                printf("Exceeds withdrawn amount limits!!!\n");
            }
        }
        else {
            printf("Exiting...\n");
            a = 0 ;
        }
    }
    else {
        printf("Invalid choice. Please try again.\n");
    }
    if (n>0){
        printf("________________________________________\n");
    }
  }
}