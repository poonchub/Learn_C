#include <stdio.h>
void print_array(int [], int);
void read_value(int [], int);

int main(){
    int a[5];
    int b[]={1,2,3,4,5};
    int n1 = sizeof(b)/sizeof(b[0]);
    int n2 = sizeof(a)/sizeof(a[0]);
    // printf("Size of int: %lu\n",sizeof(int));
    // printf("Size of array a: %lu\n",sizeof(a));
    // printf("Size of array b: %lu\n",sizeof(b));
    // printf("Array size: %d\n",n);

    // print_array(a,n2);
    print_array(b,n1);
}

void print_array(int x[], int s){
    for (int i = 0 ; i<s ; i++){
        printf("At index %d = %d\n",i,x[i]);
    }
}
// void read_value(int x[], int s){
//     for (int j = 0 ; j<s ; j++){
//         printf("Enter a number: ");
//         scanf("%d",&x[j]);
//         printf("At index %d = %d\n",j,x[j]);
//     }
// }