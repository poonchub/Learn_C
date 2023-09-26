/*
กรสร้างตัวแปร 
- ชนิดข้อมูล ชื่อตัวแปร ;
- ชนิดข้อมูล ชื่อตัวแปร = ค่าเริ่มต้น ;
- ชนิดข้อมูล ชื่อตัวแปร1, ชื่อตัวแปร2 ;

*/
/*
Data Type 
- boolean ค่าทางตรรกศาสตร์ (true = 1 , false = 0)
- int ตัวเลขจำนวนเต็ม
- float จำนวนจริง
- char ตัวอักษร (ใช้เครื่องหมาย ' ')
- string กลุ่มตัวอักษร (ใช้เครื่องหมาย " ")
*/
#include <stdio.h>
#include <stdbool.h> //ทำให้สร้างตัวแปรที่มีค่า boolean ได้

int main(){
    int n ;
    char s1 = 'A';
    char s2[10] = "Poonchub"; // variable[จำนวนตัวอักษร] จองพื้นที่ข้อมูล
    float f = 3.56;
    bool b = true ;

    n = 25; //กำหนดค่าให้ n 

    printf("%d\n",n);
    printf("%c\n",s1);
    printf("%s\n",s2);
    printf("%.2f\n",f);
    printf("%d\n",b);
}