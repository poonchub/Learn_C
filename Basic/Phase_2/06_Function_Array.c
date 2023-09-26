#include <stdio.h>
void showArray(int [], int);
int main(){
    int score1[]={10,20,30,40,50};
    int m = sizeof(score1)/sizeof(score1[0]);
    showArray(score1,m);
}
void showArray(int x[], int y){
    printf("Array score: ");
    for (int i = 0 ; i<y ; i++){
        printf("\t%d",x[i]);
    }
}