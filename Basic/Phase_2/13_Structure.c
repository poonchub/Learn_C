/*
Structure ใช้เก็บข้อมูลเป็นชุด สร้างชนิดข้อมูลขึ้นมาใช้เอง
โครงสร้าง
    struct StructureName
    {
        //data//
    };
*/

#include <stdio.h>
#include <string.h>
struct user
{
    char name[20];
    char gender;
    int age;
}emp3={"Banana",'M',40};    //การกำหนดค่าเริ่มต้นแบบที่ 2

int main(){
    //การใช้งาน
    struct user emp1;   //กำหนดตัวแปรในการเก็บชุดข้อมูล
    strcpy(emp1.name,"Poonchub");
    emp1.gender='M';
    emp1.age=30;

    //การแสดงผล
    printf("Name : %s\n",emp1.name);
    printf("Gender : %c\n",emp1.gender);
    printf("Age : %d\n",emp1.age);
    printf("====================\n");

    //การกำหนดค่าเริ่มต้นแบบที่ 1
    struct user emp2={"Nanawan",'F',35};
    printf("Name : %s\n",emp2.name);
    printf("Gender : %c\n",emp2.gender);
    printf("Age : %d\n",emp2.age);
    printf("====================\n");

    printf("Name : %s\n",emp3.name);
    printf("Gender : %c\n",emp3.gender);
    printf("Age : %d\n",emp3.age);

}