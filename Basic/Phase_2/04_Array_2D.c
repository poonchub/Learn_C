#include <stdio.h>
int main(){
    //int n[row][column]={{_,_,_,...},{_,_,_,...},...}
    int score1[2][4]={{1,2,3,4},{5,6,7,8}};
    int score2[2][2];

    //การหาจำนวนข้อมูลภายใน array
    int row1 = sizeof(score1)/sizeof(score1[0]);
    int col1 = sizeof(score1[0])/sizeof(score1[0][0]);
    //การแสดงสมาชิก
    printf("Array score1[2][4]:");
    for (int i = 0 ; i<row1 ; i++){
        for (int j = 0 ; j<col1 ; j++){
            printf("\t%d",score1[i][j]);
        }
    }
    printf("\n");
    //กำหนดค่าให้ array
    // score2[0][0] = 5;
    // score2[0][1] = 10;
    // score2[1][0] = 15;
    // score2[1][1] = 20;
    int row2 = sizeof(score2)/sizeof(score2[0]);
    int col2 = sizeof(score2[0])/sizeof(score2[0][0]);
    for (int i = 0 ; i<row2 ; i++){
        for (int j = 0 ; j<col2 ; j++){
            printf("Enter a number: ");
            scanf("%d",&score2[i][j]);
        }
    }
    printf("Array score2[2][2]:");
    for (int i = 0 ; i<row2 ; i++){
        for (int j = 0 ; j<col2 ; j++){
            printf("\t%d",score2[i][j]);
        }
    }
}