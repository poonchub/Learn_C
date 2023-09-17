#include<stdio.h>

int main()
{
    int n=0, i=0, j=0, flag, t ;
    char a ;
    do
    {
        flag = 0;
        printf("Please enter a positive number> ");
        t = scanf("%d",&n);
        if (t != 1)
        {
            scanf("%c",&a);
            printf("%c is an invalid input\n",a);
        }
        else if (n<2)
        {
            if (n>0)
            {
                printf("%d is less than 2.\n",n);
            }
            else
            {
                printf("%d is not a positive number.\n",n);
            }
            flag = 1;
        }
    }
    while (flag);
    if (n%2==0)
    {
        for ( i = 1  ; i <= n ; i++)
        {
            for ( j = 1 ; j <= ((2*n)-1)+((2*n)-2) ; j++)
            {
                if (j >= n-(i-1) && j<= n+(i-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        for ( i = n  ; i >=1 ; i--) //สลับค่าเริ่มต้นเฉยๆ จะได้แบบกลับหัว
        {
            for ( j = 1 ; j <= ((2*n)-1)+((2*n)-2) ; j++)
            {   
                if (j >= n-(i-1) && j<= n+(i-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
