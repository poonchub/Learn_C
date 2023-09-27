#include <stdio.h>
int main(){
    int a = 1, n, i, j;
    int status ;
    char skip_ch;

    while (a==1){
        printf("Please enter side length of square: ");
        status = scanf("%d",&n);
        if (status==1){
            if (n>=5 && n%2==1){
                a = 0 ;
                for (i=1 ; i<=n ; i++){
                    for (j=1 ; j<=n ;j++){
                        if (i==1 || i==n || j==1 || j==n || i==j || i+j==n+1){
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                    }
                    printf("\n");
                } 
            }
            else {
                printf("The side length must be an odd number with at least 5.\n");
            }
        }else{
            scanf("%c",&skip_ch);
            printf("%c in an invalid input.\n",skip_ch);
        }
        
    }
}