#include <stdio.h>
void func1();
void add(int);
int n2 = 200;   //global variable
int main(){
    int n1=100;     //local variable
    printf("%d\n",n1);
    func1();
    add(50);
    func1();
}

void func1(){
    printf("%d\n",n2);
}

void add(int x){
    n2+=x;
}