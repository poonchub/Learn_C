#include <stdio.h>
int main(){
    int a=1, n, status ;
    int i, j;
    char skip_ch ;
    while (a==1){
        printf("Enter a number: ");
        status = scanf("%d",&n);
        if (status==1){
            if (n>=5 && n%2==1){
                a = 0 ;
                for (i=1 ; i<=n ; i++){
                    for (j=1 ; j<=n ; j++){
                        if (j==1 || j==n){
                            printf("B");
                        }
                        else if (i==1 || i==n){
                            printf("A");
                        }
                        else {
                            printf("*");
                        }
                    }
                    printf("\n");
                }
            }
            else {
                printf("The side length must be an odd number with at least 5.\n");
            }

        }
        else {
            scanf("%c",&skip_ch);
            printf("%c in an invalid input.\n",skip_ch);
        }
    }
    

}