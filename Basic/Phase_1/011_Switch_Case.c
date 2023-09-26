#include <stdio.h>
/*
โครงสร้าง
switch (expression)
    {
    case constant-expression :
        code 
        break;
    default:
        break;
    }
*/
int main(){
    int service;
    printf("Create Account -> 1\nWithdraw -> 2\nDeposite -> 3\n");
    printf("Input Service Number = ");
    scanf("%d",&service);

    switch (service){
    case 1 :
        printf("Create Account\n");
        break;
    case 2 :
        printf("Withdraw\n");
        break;
    case 3 :
        printf("Deposite\n");
        break;
    default:
        printf("Invalid\n");
    }
}