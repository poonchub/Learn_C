/*
ฟังก์ชันมาตรฐานเกี่ยวกับคณิตศาสตร์
ต้องทำการ #include <math.h> ก่อนใช้งาน
    - pow(เลขฐานเลขชี้กำลัง)   -> เลขยกกำลัง
    - sqrt()    -> รูท
    - ceil()    -> ปัดเศษขึ้น
    - floor()   -> ปัดเศษลง
    - fabs()    -> ค่าสัมบูรณ์
*/
#include <stdio.h>
#include <math.h>
int main(){
    int a = pow(2,4);
    float b = sqrt(4);
    float c = ceil(3.65);
    float d = floor(3.65);
    int e = fabs(-5);
    printf("a = %d\n",a);
    printf("b = %.2f\n",b);
    printf("c = %.2f\n",c);
    printf("d = %.2f\n",d);
    printf("e = %d\n",e);
}