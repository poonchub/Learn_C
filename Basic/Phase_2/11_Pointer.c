/*
Pointer คือ ตัวแปลที่ใช้เก็บที่อยู่ของตัวแปรที่สนใจ
    ชนิดข้อมูล *variablep ;
*/
#include <stdio.h>
int main(){
    int num = 10;
    int *ap = &num;
    char letter = 'A';
    char *bp = &letter;
    int *num_input;

    printf("Input number: ");
    scanf("%d",&num_input);     /* การกำหนดค่า ต้องใส่ & */
    printf("num_input = %d\n\n",num_input);

    printf("num = %d\n",num);
    printf("num = %d\n",*ap);
    printf("Address num = %p\n",&num);
    printf("Address num = %p\n\n",ap);

    printf("letter = %c\n",letter);
    printf("letter = %c\n",*bp);
    printf("Address num = %p\n",&letter);
    printf("Address num = %p\n\n",bp);
}