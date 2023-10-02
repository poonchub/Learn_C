/*
ฟังก์ชันมาตรฐานเกี่ยวกับข้อความ
ต้องทำการ #include <string.h> ก่อนใช้งาน
    - strlen()                  -> จำนวนตัวอักษร
    - strcpy(str1,str2)         -> คัดลอกข้อความจาก str2 ไปเก็บที่ str1
    - strncpy()
    - strcat(str1,str2)         -> ต่อข้อความใน str1 ด้วย str2
    - strncat(str1,str2,n)      -> ต่อข้อความใน str1 ด้วย str2 จำนวน n อักษร
    - strcpm(str1,str2)         -> เปรียบเทียบข้แความว่าเหมือนกันหรือไม่
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