#include <stdio.h>
int how();
void input_age(int [], int);
int max_age(int [], int);

int main(){
    int n = how();
    int age[n];

    input_age(age, n);
    int index = max_age(age, n);
    printf("Max at index %d",index);
}
int how(){
    int x;
    printf("How many : ");
    scanf("%d",&x);
    return x;
}
void input_age(int x[], int m){
    for(int i=0 ; i<m ; i++){
        printf("Age [%d] : ",(i+1));
        scanf("%d",&x[i]);
    }
}
int max_age(int x[], int m){
    int index = 0;
    for (int j=0 ; j<m ; j++){
        if (x[j]>x[index]){
            index = j;
        }
    }
    return index+1;
}