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
                for (i=1 ; i<=n+2 ; i++){
                    for (j=1 ; j<=n+2 ; j++){
                        if ((i==1 && j==1) || ((i==1 && j==n+2)) || ((i==n+2 && j==1)) || ((i==n+2 && j==n+2))){
                            printf("O ");
                        }
                        else if (i==1 || i==n+2 || j==1 || j==n+2){
                            printf("  ");
                        }
                        else if (j==2 || j==n+1){
                            printf("B ");
                        }
                        else if (i==2 || i==n+1){
                            printf("A ");
                        }
                        else {
                            printf("* ");
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