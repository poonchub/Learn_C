#include <stdio.h>
#include <math.h>
int main()
{
    int n, j, sum = 0;
    printf("Please enter a positive integer (n): ");
    scanf("%d", &n);
    if (n>0){
        for (j=0; j<=n; j++)
    {
        sum += 5 * (pow(3, j));
        printf("j = %d, sum = %d\n", j, sum);
    }printf("Summation: %d", sum);
    } else {
        printf("Invalid input!");
    }
    
    
}