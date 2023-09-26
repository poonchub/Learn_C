#include <stdio.h>
int main(){
    int i=0, n;
    printf("Enter round: ");
    scanf("%d",&n);
    for (int i = 0 ; i<n ; i++){
        if (i+1==3||i+1==4){
            continue;
        }
        printf("Round %d: Hello World\n",(i+1));
    }
}