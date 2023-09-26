#include <stdio.h>
int main(){
    int n1, n2;
    printf("Input Number 1: ");
    scanf("%d",&n1);
    printf("Input Number 2: ");
    scanf("%d",&n2);
    if (n1>n2){
        printf("%d>%d",n1,n2);
    }
    else if (n1<n2){
        printf("%d<%d",n1,n2);
    }
    else {
        printf("%d=%d",n1,n2);
    }
}