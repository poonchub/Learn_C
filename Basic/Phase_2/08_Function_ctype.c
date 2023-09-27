/*
ฟังก์ชันมาตรฐานเกี่ยวกับตัวอักษร
ต้องทำการ #include <ctype.h> ก่อนใช้งาน
    - toupper()   -> ทำให้เป็นพิมพ์ใหญ่
    - tolower()   -> ทำให้เป็นพิมพ์เล็ก
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char l1 = 'a';
    char l2 = 'B';
    printf("Value 1 = %c\n",l1);
    printf("Value 2 = %c\n",l2);
    printf("Upper = %c\n",toupper(l1));
    printf("Lower = %c\n",tolower(l2));
}