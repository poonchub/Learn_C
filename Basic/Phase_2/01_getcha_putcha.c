#include <stdio.h>
int main(){
    char confirm;
    printf("Do you want to exit program (y/n): ");
    confirm = getchar();    //รับข้อมูล 1 ตัวอักษร
    putchar(confirm);       //แสดงข้อมูล 1 ตัวอักษร
}