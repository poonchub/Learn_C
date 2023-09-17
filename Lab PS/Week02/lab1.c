#include <stdio.h>
void main(){
    int a,b,c,d,e,n = 0;
    float sum=0 , av = 0 ;

    printf("Please enter scores from the judges (a/b/c/d/e) :");
    scanf("%d/%d/%d/%d/%d",&a,&b,&c,&d,&e);
    if (a%2==0){
        sum= sum+a;
        n= n+1;
    } if (b%2==0){
        sum= sum+b;
        n= n+1;
    } if (c%2==0){
        sum= sum+c;
        n= n+1;
    } if (d%2==0){
        sum= sum+d;
        n= n+1;
    } if (e%2==0){
        sum= sum+e;
        n= n+1;
    } if (n>0){
        av = sum/n;
    } else {
        printf("Sorry, all the judges' score can not be use.\n");
        av=0;

    }
    printf("Num of judges used : %d\n",n);
    printf("The final score is : %.2f",av);


}