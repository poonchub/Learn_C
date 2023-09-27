/*
ใช้ pointer ในการ return ข้อมูลในฟังก์ชันมากกว่า 1 ตัว
*/
#include <stdio.h>
void sum_avg(int, int, int *, float *);
int main(){
    int sump;
    float avgp;
    sum_avg(5,4,&sump,&avgp);
    printf("Sum = %d\n",sump);
    printf("Average = %.2f\n",avgp);
}

void sum_avg(int a, int b, int *x, float *y){
    *x = a+b;
    *y = *x/2.0;
}