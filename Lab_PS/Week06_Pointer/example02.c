#include <stdio.h>
void read_input(int *); //function prototype

int input;  //Global variable

int main(){
    int input;  //Local variable
    read_input(&input);
    printf("Input: %d\n", input);

}
void read_input(int *inputp){   //parameter list
    printf("Enter a number: ");
    scanf("%d", inputp);    //ไม่ต้องใส่ &
}