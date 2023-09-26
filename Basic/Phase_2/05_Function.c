/*
โครงสร้าง
    #include <stdio.h>
    void FunctionName(void);

    int main(){
        FunctionName();
    }
    void FunctionName(void variable){
        code
    }
*/
#include <stdio.h>
void print_Hi();   //ฟังก์ชันไม่รับค่าเข้าและไม่ส่งค่าออก
void print_Num(int);    //ฟังก์ชันรับค่าเข้าและไม่ส่งค่าออก
int print_Sum(int, int);     //ฟังก์ชันรับค่าเข้าและส่งค่าออก
float print_PI();     //ฟังก์ชันไม่รับค่าเข้าและส่งค่าออก

int main(){
    print_Hi();
    print_Num(5);
    int sum = print_Sum(5,6);
    printf("x+y = %d\n",sum);
    float PI = print_PI();
    printf("PI = %.2f\n",PI);
}

void print_Hi(){
    printf("Hi World\n");
}
void print_Num(int x){
    printf("Num = %d\n",x);
}
int print_Sum(int x, int y){
    return x+y;
}
float print_PI(){
    float PI;
    return PI = 3.14;
}