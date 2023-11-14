#include <stdio.h>

int main() {
    int n, count = 0;

    // จำนวนข้อมูลที่ต้องการป้อน
    printf("How many number: ");
    scanf("%d", &n);

    // สร้าง array เพื่อเก็บข้อมูล
    int A[n];

    // ป้อนข้อมูลจากผู้ใช้
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &A[i]);
        count += 1 ;
    }

    // หาค่าสูงสุดและต่ำสุด
    int max = A[0], min = A[0];
    int indexMax = 0, indexMin = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
            indexMax = i;
        }
        if (A[i] < min) {
            min = A[i];
            indexMin = i;
        }
        count += 1 ;
    }

    // แสดงผลลัพธ์
    printf("Max number is A[%d] =  %d\n", indexMax, max);
    printf("Min number is A[%d] =  %d\n", indexMin, min);
    printf("Max - min = %d\n",(max-min));
    printf("Loop = %d",count);
}