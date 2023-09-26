#include <stdio.h>
int main(){
    int score1[5];      //จองพื้นที่
    int score2[]={20,30,40,50};     //กำหนดค่าให้ array
    //การหาจำนวนข้อมูลภายใน array
    int n = sizeof(score2)/sizeof(score2[0]);
    printf("Array score2 have %d number:",n);

    //การแสดงข้อมูลภายใน array
    for (int i = 0 ; i<n ; i++){
        printf("\t%d",score2[i]);
    }
    printf("\n");

    //กำหนดค่าให้ array
    // score1[0] = 5;
    // score1[1] = 10;
    // score1[2] = 15;
    // score1[3] = 20;
    // score1[4] = 25;
    int m = sizeof(score1)/sizeof(score1[0]);
    for (int i = 0 ; i<m ; i++){
        printf("Enter Number: ");
        scanf("%d",&score1[i]);
    }
    printf("Array score1 have %d number:",m);
    for (int i = 0 ; i<m ; i++){
        printf("\t%d",score1[i]);
    }
}