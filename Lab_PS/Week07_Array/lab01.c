#include <stdio.h>
float read_num_of_student();
void read_heights(float [],int);
float find_average(float [], int);
    
int main(){
    int x = read_num_of_student();
    float y[x], avg;
    read_heights(y, x);
    avg = find_average(y, x);
    printf("Average height: %.2f",avg);
}

float read_num_of_student(){
    int x;
    printf("Please enter the number of student: ");
    scanf("%d",&x);
    return x;
}

void read_heights(float y[],int x){
    for (int i =0 ; i<x ; i++){
        printf("Please enter student height [%d]: ",i+1);
        scanf("%f",&y[i]);
    }
}
float find_average(float y[], int x){
    float sum = 0, avg;
    for (int i = 0 ; i<x ; i++){
        sum += y[i];
    }
    avg = sum/x;
    return avg;
}