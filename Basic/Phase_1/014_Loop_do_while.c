#include <stdio.h>
// โครงสร้าง
// do
// {
//     /* code */
// } while (/* condition */);

int main(){
    int i=0, n;
    printf("Enter round: ");
    scanf("%d",&n);
    do{
        printf("Hello World\n");
        i++;
    }
    while (i<n);
}