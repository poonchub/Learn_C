#include <stdio.h>
int main(){
    int i=0, n;
    printf("Enter round: ");
    scanf("%d",&n);
    for (int i = 0 ; i<n ; i++){
        if (i==5){
            break;
        }
        printf("Round %d: Hello World\n",(i+1));
    }
}