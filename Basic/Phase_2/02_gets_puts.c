#include <stdio.h>
int main(){
    char s[20];
    printf("Enter a string: ");
    gets(s);    //รับชุดข้อมูล string ที่มีช่องว่าง
    puts(s);
}