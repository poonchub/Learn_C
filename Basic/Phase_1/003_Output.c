#include <stdio.h>
int main(){

    /*
    printf("Format String",List Of Data);
    Format String
        - %d ข้อมูลตัวเลขจำนวนเต็ม
        - %f ข้อมูลตัวเลขที่มีทศนิยม
        - %c ข้อมูลตัวอักษรตัวเดียว
        - %s ข้อมูลข้อความ มีลักษณะเป็นชุดของตัวอักษร ตัวเลข หรือ อักขระพิเศษ อยู่ในพื้นที่เครื่องหมาย Double Quote ("")
    อักขระควบคุมกการแสดงผล
        - \n ขึ้นบรรทัดใหม่
        - \t เว้นช่องว่างในแนวนอน
        - \"\" ใส่ "" ในข้อความ
    */

   printf("Student Data.\n");
   printf("FirstName = %s , LastName = %s\n","Poonchub","Nanwan");
   printf("Age = %d year old\n",30);
   printf("Gender = %c\n",'M');
   printf("GPA = %.2f\n",3.752);
   

}