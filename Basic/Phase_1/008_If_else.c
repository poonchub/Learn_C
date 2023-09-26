/*
if (condition) {
    คำสั่งเมื่อเงื่อนไขเป็นจริง;
}
*/
#include <stdio.h>
int main(){
    int score ;
    printf("Your score : ");
    scanf("%d",&score);
    if (score>=50) {
        printf("You can tast.");
    }
    else {
        printf("You can not tast.");
    }
}