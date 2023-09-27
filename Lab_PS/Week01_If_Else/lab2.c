#include <stdio.h>
#include <math.h>
int main(void){
    int num;
    printf("Please enter a perimeter of a regular pentagon: ");
    scanf("%d",&num);

    if (num>0){
        printf("OK, %d can be a perimeter.\n",num);
        if (num%5==0){
            printf("%d has %d as a perimeter.\n",num,num/5);
            float area = (1.0/4.0)*sqrt(5.0*(5.0+2.0*sqrt(5.0)))*pow(num/5.0,2.0);

            printf("The area of the regular pentagon is %.3f.",area);
        } else {
            printf("But it may not suit this calculation.");
        }
    } else {
        printf("Sorry, %d id not a perimeter.");
        }
}