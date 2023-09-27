/*
Typedef เป็นการสร้าง type ขึ้นมาใหม่
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    char gender;
    int age;
}Employee;  //ชื่อ type ใหม่

int main(){
    Employee emp1 = {"Banana",'M',40};
    
    printf("Name : %s\n",emp1.name);
    printf("Gender : %c\n",emp1.gender);
    printf("Age : %d\n",emp1.age);
    printf("====================\n");
}


