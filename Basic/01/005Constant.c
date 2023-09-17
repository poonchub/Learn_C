/*
Constant
- Literal Constant ค่าคงที่ซึ่งเป็นข้อมูลที่แน่นอน ไม่ต้องมีตัวแปรมารองรับ
- Defined Constant ค่าคงที่ซึ่งประกาศไว้ที่ส่วนหัวของโปรแกรม
- Memory Constant เป็นการกำหนดค่าคงที่ให้ตัวแปร 
*/

#include <stdio.h>
#define NUMBER 100  //Defined Constant
int main(){
    //Literal Constant
    printf("Hello %s\n","Poonchub"); 
    printf("2 x 2 = %d\n",4);

    //Defined Constant
    printf("Number = %d\n",NUMBER);
    
    //Memory Constant
    const int N = 10;
    const float F = 3.123;
    printf("N = %d\n",N);
    printf("F = %.2f\n",F);
}