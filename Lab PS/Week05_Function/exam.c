#include <stdio.h>
int summation1(int, int );
void summation2(int, int );

int main(){
    int sum;
    sum = summation1(9, 10);
    printf("Sum: %d.\n",sum);
    printf("Sum: %d.\n",summation1(4, 5));
    summation2(8,6);
}

int summation1(int num1, int num2){
    return (num1+num2);
}
void summation2(int num1, int num2){
    printf("Sum: %d.",(num1+num2));

}
