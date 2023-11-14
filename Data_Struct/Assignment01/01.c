#include <stdio.h>

int main(){
    int n, count = 0;

     // จำนวนข้อมูลที่ต้องการป้อน
    printf("How many number: ");
    scanf("%d", &n);

    // สร้าง array เพื่อเก็บข้อมูล
    int A[n], B[n];

    // ป้อนข้อมูลจากผู้ใช้
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &A[i]);
        count += 1;
        B[i] = A[i];
    }

    // sorted data
    int temp;
    for (int x = 0 ; x < n-1 ; x++){
        for (int y = 0 ; y < n-1-x ; y++){
            if (A[y]>A[y+1]){
                temp = A[y];
                A[y] = A[y+1];
                A[y+1] = temp;
            }
            count += 1;
        }
    }

    // find index
    int indexMax, indexMin;
    for (int m = 0; m < n; m++){
        if (B[m]==A[0]){
            indexMin = m;
        }
        else if (B[m]==A[n-1]){
            indexMax = m;
        }
        count += 1;
    }

    // output
    printf("Max number is A[%d] =  %d\n", indexMax, A[n-1]);
    printf("Min number is A[%d] =  %d\n", indexMin, A[0]);
    printf("Max - min = %d\n",(A[n-1]-A[0]));
    printf("Loop = %d",count);
}