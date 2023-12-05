#include <stdio.h>
void boublesort(int [], int);
void display(int [], int);

int main(){
    int a[] = {2,3,6,1,7,4};
    int count = sizeof(a)/sizeof(a[0]);
    printf("Before: ");
    display(a,count);
    printf("After: ");
    boublesort(a,count);
}

void boublesort(int a[], int count){
    for (int i = 0 ; i<count-1 ; i++){
        for (int j = 0 ; j<count-1-i ; j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    display(a,count);
}

void display(int a[], int count){
    for (int i=0 ;i<count ; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}