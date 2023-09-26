#include <stdio.h>
#include <stdbool.h>
int main(){
    int n, i, j;
    bool a = true;
    while (a){
        printf("Please enter side length of square: ");
        scanf("%d",&n);
        if (n>=0 || n<0){
            if (n>=5 && n%2==1){
                a = false;
                for (i=1 ; i<=n ; i++){
                    for (j=1 ; j<=n ; j++){
                        if (i==1 || i==n || i==(n+1)/2 || j==1 || j==n || j==(n+1)/2 ){
                            printf("* ");
                        }
                        else {
                            printf("  ");
                        }
                        
                    }printf("\n");
                }
            }
            else {
                printf("The side length must be an odd number with at least 5.\n");
            }
        }
        else {
            printf("%s is an invalid input",n);
        }
    }
    

}