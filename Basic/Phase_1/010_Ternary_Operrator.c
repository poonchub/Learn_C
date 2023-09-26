#include <stdio.h>
int main(){
    int score ;
    printf("Your score : ");
    scanf("%d",&score);
    printf("%s", score>=50 ? "You can tast." : "You can not tast.");
}