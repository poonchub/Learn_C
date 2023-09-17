#include <stdio.h>
int main(){
    int a = 1, n, cola=5, drinkW=5, juice=5 ;
    int p, q, r ;
    int c_p=0, c_q=0, c_r=0;
    float C=20, D=10, J=15, sum_C=0, sum_D=0, sum_J=0 ;
    while (a==1){
        printf("Memu: \n");
        printf("1 - Cola (%d)\n",cola);
        printf("2 - Drinking (%d)\n",drinkW);
        printf("3 - Juice (%d)\n",juice);
        printf("0 - Confirm\n");
        printf("Enter your choice: ");
        scanf("%d",&n);

        if (n>=0 && n<=3){
            if (n==1){
                printf("How many cans do you want? ");
                scanf("%d",&p);
                if (p<=cola && p>0){
                    cola -= p;
                    sum_C += C*p;
                    c_p += p;
                }
                else {
                    printf("Sorry, invalid input.\n");
                }
            }
            else if (n==2){
                printf("How many cans do you want? ");
                scanf("%d",&q);
                if (q<=drinkW && q>0){
                    drinkW -= q;
                    sum_D += D*q;
                    c_q += q;
                }
                else {
                    printf("Sorry, invalid input.\n");
                }
            }
            else if (n==3){
                printf("How many cans do you want? ");
                scanf("%d",&r);
                if (r<=juice && r>0){
                    juice -= r;
                    sum_J += J*r;
                    c_r += r;
                }
                else {
                    printf("Sorry, invalid input.\n");
                }
            }
            else{
                a = 0;
                printf("========================================\n");
                printf("Summary:\n");
                printf("Cola: %d (%.2f)\n",c_p,sum_C);
                printf("Drinking Water: %d (%.2f)\n",c_q,sum_D);
                printf("Juice: %d (%.2f)\n",c_r,sum_J);
                printf("Total price: %.2f\n",(sum_C+sum_D+sum_J));
            }
            
        }
        else {
            printf("Invalid choice. Please try again.\n");
        }
        if (n>0 || p>0 || q>0 || r>0){
                printf("----------------------------------------\n");
        }
    }
}