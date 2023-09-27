/*
ฟังก์ชันมาตรฐานเกี่ยวกับข้อความ
ต้องทำการ #include <string.h> ก่อนใช้งาน
    - strlen()  -> จำนวนตัวอักษร
    - strcpy(ตัวแปลใหม่,ตัวแปลที่คัดลอก)  -> คัดลอกข้อความ
    - strcat("_","_")  -> ต่อข้อความ
    - strcpm(var1,var2)  -> เปรียบเทียบข้แความว่าเหมือนกันหรือไม่

*/
#include <stdio.h>
#include <string.h>
int main(){
    char n[20] = "Poonchub";
    char copyN[20];
    strcpy(copyN,n);
    
    printf("Count n = %d\n",strlen(n));
    printf("Copy n to copyN: %s\n",copyN);

    strcat(copyN,"\tNanawan");
    printf("copyN + \"Nanawan\": %s\n",copyN);
    
    int score = strcmp(n,copyN);
    if (score==0) {
        printf("Equar");
    }
    else {
        printf("Not Equar");
    }
}