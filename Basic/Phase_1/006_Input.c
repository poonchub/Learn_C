/*
Input
    Datatype variable ;
    scanf("Format String",&variable);
*/
#include <stdio.h>
int main(){
    int n;
    char Name[10];
    float Gpa;

    printf("Please enter Number Name GPA : ");
    scanf("%d %s %f",&n,&Name,&Gpa);
    printf("No : %d, Name : %s, GPA : %.2f",n,Name,Gpa);
}