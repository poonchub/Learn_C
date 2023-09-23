#include <stdio.h>
int convert_to_seconds(int, int, int);

int main(){
    int h, m, s, sum;
    printf("Enter the time (h:m:s): ");
    scanf("%d:%d:%d",&h,&m,&s);
    sum = convert_to_seconds(h,m,s);
    printf("It is equal to %d second(s) long in total.",sum);
}

int convert_to_seconds(int x, int y, int z){
    return ((x*60*60)+(y*60)+z);
}