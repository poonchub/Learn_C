#include <stdio.h>
int main(void){
    int num;
    printf("Please enter a positive integer number: ");
    scanf("%d",&num);
    if (num>0){
        if (num%5==0){
            printf("OK, %d is a positive integer number.\n",num);
            printf("%d has %d as a factor",num,num/5);
        }else{
            printf("OK, %d is a positive integer number.",num);
        }
    }else {
        printf("Sorry, %d is a zero/negative integer number.",num);
    }
}
