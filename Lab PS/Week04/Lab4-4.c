#include<stdio.h>

int main()
{
    int n, i=0, j=0 ;
    printf("Please enter a positive number> ");
    scanf("%d",&n);
    for ( i = 1  ; i <= n ; i++)
    {
        for ( j = 1 ; j <= ((2*n)-1)+((2*n)-2) ; j++)
        {
            if (j >= n-(i-1) && j<= n+(i-1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
