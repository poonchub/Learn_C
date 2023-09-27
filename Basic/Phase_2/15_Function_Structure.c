#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[20];
    char gender;
    int age;
}Employee;

void show_data(Employee);

int main(){
    Employee emp1 = {"Banana",'M',40};
    show_data(emp1);
}

void show_data(Employee person){
    printf("Name : %s\n",person.name);
    printf("Gender : %c\n",person.gender);
    printf("Age : %d\n",person.age);
    printf("====================\n");
}