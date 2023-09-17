#include <stdio.h>
int main(void)
{
    int score;

    printf("Please enter your score (0-100): ");
    scanf("%d", &score);

    switch (score >= 0 && score <= 100)
    {
    case 1:
        switch (score < 50)
        {
        case 1:
            printf("grade : F");
            break;

        default:
            switch (score / 10)
            {
            case 5:
                printf("grade : D");
                break;
            case 6:
                printf("grade : C");
                break;
            case 7:
                printf("grade : B");
                break;
            default:
                printf("grade : A");
                break;
            }
            break;
        }
        break;

    default:
        printf("invaliable scaore");
        break;
    }
    return (0);
}