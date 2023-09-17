/*
Operator
    + บวก
    - ลบ
    / หาร ถ้าตัวถูกดำเนินการเป็น int จะได้แค่ผลหาร
    * คูณ
    % หารเอาเศษ

การเพิ่ม-ลดค่า
    ++(Prefix) ->   ++a     ; เพิ่มค่าให้ a ก่อน 1 ค่าแล้วนำไปใช้
    ++(Posfix) ->   a++     ; นำค่า a ไปใช้ก่อนแล้วค่อนเพิ่มค่า
    --(Prefix) ->   --a     ; ลดค่าให้ a ก่อน 1 ค่าแล้วนำไปใช้
    --(Posfix) ->   a--     ; นำค่า a ไปใช้ก่อนแล้วค่อนลดค่า

Compound Assingment
    x = x+y   ->   x+=y
    x = x-y   ->   x-=y
    x = x*y   ->   x*=y
    x = x/y   ->   x/=y
    x = x%y   ->   x%=y

Comparison Operator
    ผลการเปรียบเทียบจะได้คำตอบ คือ True(1) หรือ False(0)
    ==  เท่ากับ?
    !=  ไม่เท่ากับ?
    >   มากกว่า?
    >=  มากกว่าหรือเท่ากับ?
    <   น้อยกว่า?
    <=  น้อยกว่าหรือเท่ากับ?
    &&  และ
    ||  หรือ

*/
#include <stdio.h>
int main(){
    //Operator
    int n1 = 3;
    int n2 = 5;
    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d\n",n1,n2,n1-n2);
    printf("%d * %d = %d\n",n1,n2,n1*n2);
    printf("%d / %d = %d\n",n1,n2,n1/n2);
    printf("%d mod %d = %d\n",n1,n2,n1%n2);
    printf("\n");

    //การเพิ่ม-ลดค่า
    int n3 = 23;
    printf("Number = %d\n",n3);
    printf("Number = %d\n",n3++);
    printf("Number = %d\n",n3);
    printf("Number = %d\n",++n3);
    printf("Number = %d\n",n3);
    printf("\n");

    //Compound Assingment
    int n4 = 50;
    printf("Num = %d\n",n4);
    n4+=20; 
    printf("Num = %d\n",n4);
    n4-=10;
    printf("Num = %d\n",n4);
    printf("Num = %d\n",n4*=3);
    printf("\n");

    //Comparison Operator
    int a=100, b=200;
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>b);
    printf("%d\n",a<b);
}
