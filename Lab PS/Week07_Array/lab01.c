#include <stdio.h>
float read_num_of_student();
void read_heights(int);
float find_average(float [], float);
    
int main(){
    read_num_of_student();

}

float read_num_of_student(){
    int x;
    printf("Please enter the number of student: ");
    scanf("%d",&x);
    read_heights(x);

}

void read_heights(int y){
    float x[y], avg;
    for (int i =0 ; i<y ; i++){
        printf("Please enter student height [%d]: ",i+1);
        scanf("%f",&x[i]);
    }
    find_average(x,y);
    
}
float find_average(float x[], float y){
    float sum = 0, avg;
    for (int i = 0 ; i<y ; i++){
        sum += x[i];
    }
    avg = sum/y;
    printf("Average height: %.2f",avg);
}