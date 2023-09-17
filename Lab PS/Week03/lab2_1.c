#include <stdio.h>
#include <math.h>
int main()
{
    int n, odd = 0, even = 0;
    float sum_odd = 0, sum_even = 0;
    float avg_odd, avg_even;
    printf("Please enter a positive integer (10000 to 99999 only): ");
    scanf("%d", &n);
    if (n >= 10000 && n <= 99999)
    {
        switch ((n / 10000) % 2 == 0)
        {
        case 1:
            even += 1;
            sum_even += (n / 10000);
            break;
        default:
            odd += 1;
            sum_odd += (n / 10000);
            break;
        }

        switch (((n % 10000) / 1000) % 2 == 0)
        {
        case 1:
            even += 1;
            sum_even += ((n % 10000) / 1000);
            break;
        default:
            odd += 1;
            sum_odd += ((n % 10000) / 1000);
            break;
        }

        switch ((((n % 10000) % 1000) / 100) % 2 == 0)
        {
        case 1:
            even += 1;
            sum_even += (((n % 10000) % 1000) / 100);
            break;
        default:
            odd += 1;
            sum_odd += (((n % 10000) % 1000) / 100);
            break;
        }

        switch (((((n % 10000) % 1000) % 100) / 10) % 2 == 0)
        {
        case 1:
            even += 1;
            sum_even += ((((n % 10000) % 1000) % 100) / 10);
            break;
        default:
            odd += 1;
            sum_odd += ((((n % 10000) % 1000) % 100) / 10);
            break;
        }
        switch ((n % 10) % 2 == 0)
        {
        case 1:
            even += 1;
            sum_even += (n % 10);
            break;
        default:
            odd += 1;
            sum_odd += (n % 10);
            break;
        }
        if (odd == 0)
        {
            printf("There is no odd integer.\n");
        }
        else
        {
            printf("There are %d odd integer.\n", odd);
        }
        if (even == 0)
        {
            printf("There is no even integer.\n");
        }
        else
        {
            printf("There are %d even integer.\n", even);
        }

        if (odd == 0)
        {
            avg_odd = 0;
        }
        else
        {
            avg_odd = sum_odd / odd;
        }
        if (even == 0)
        {
            avg_even = 0;
        }
        else
        {
            avg_even = sum_even / even;
        }
        printf("Average of odd integer: %.2f\n", avg_odd);
        printf("Average of even integer: %.2f\n", avg_even);
    }
    else
    {
        printf("Invalid input!");
    }
}