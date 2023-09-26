#include <stdio.h>
int main(){
    int n, i, odd=0 , even=0 ;
    float sum_odd=0 , sum_even=0;
    float avg_odd, avg_even;

    printf("Please enter a positive integer (10000 to 99999 only): ");
    scanf("%d", &n);
    if (n >= 10000 && n <= 99999)
    {
        while (n>0){
            if ((n%10)%2==0){
                even += 1 ;
                sum_even += n%10 ;
            }
            else {
                odd += 1 ;
                sum_odd += n%10 ;
            }
            n /= 10;
        }
        
        if (odd == 0){
            avg_odd = 0;
            printf("There is no odd integer.\n");
        } else {
            avg_odd = sum_odd/odd;
            printf("There are %d odd integers.\n",odd);
        }
        if (even == 0){
            avg_even = 0;
            printf("There is no even integer.\n");
        } else {
            avg_even = sum_even/even;
            printf("There are %d even integers.\n",even);
        }

        printf("Average of odd integers: %.2f\n",avg_odd);
        printf("Average of even integers: %.2f\n",avg_even);
    }
    else
    {
        printf("Invalid input!");
    }
}