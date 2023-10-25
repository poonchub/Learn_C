/*
ใช้ pointer ในการ return ข้อมูลในฟังก์ชันมากกว่า 1 ตัว
*/
#include <stdio.h>
void sum_avg(int, int, int *, float *);     /* รับ pointer เข้า function */
void input_num(int *);

int main(){
    int sump, num;   /* ไม่ต้องกำหนดตัวแปรเป็น pointer*/
    float avgp;
    sum_avg(5,4,&sump,&avgp);   /* ใส่ & เพื่อชี้ให้นำค่าไปเก็บไว้ในตัวแปร เสมือนเป็นตัวแปรที่ใส่ & เป็น pointer */
    printf("Sum = %d\n",sump);
    printf("Average = %.2f\n",avgp);
    printf("------------------------------\n");
    input_num(&num);
    printf("Input number = %d",num);
}

void sum_avg(int a, int b, int *x, float *y){
    *x = a+b;
    *y = *x/2.0;
}

void input_num(int *n){
    printf("Enter a number: ");
    scanf("%d",n);      /* การกำหนดค่า ไม่ต้องใส่ & */
}