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

    printf("num = %d\n",num);
    printf("num = %d\n",*ap);
    printf("Address num = %p\n",&num);
    printf("Address num = %p\n",ap);

    printf("letter = %c\n",letter);
    printf("letter = %c\n",*bp);
    printf("Address num = %p\n",&letter);
    printf("Address num = %p\n",bp);
}