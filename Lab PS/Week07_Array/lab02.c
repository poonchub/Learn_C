#include <stdio.h>
void print_array(int [], int);
void bubble_sort(int [], int);
int main(){
    int a[]={3,0,1,8,7,2,5,4,6,9}, n;
    printf("Ascending Bubble Sort\n");
    n = sizeof(a)/sizeof(0);
    printf("Array before sorting:");
    print_array(a,n);
    printf("\nArray after sorting:");
    bubble_sort(a,n);
}

void print_array(int x[], int y){
    
    for (int i = 0 ; i<y ; i++){
        printf("\t%d",x[i]);
    }
}

void bubble_sort(int x[], int y){
    int temp;
    for (int i = 0 ; i<y ; i++){
        for (int j =0 ; j<i ; j++){
            if (x[j+1]<x[j]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    print_array(x,y);
}