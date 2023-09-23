#include <stdio.h>
void add(int, int, int *);

int main(){
    int a;
    printf("a: %d\n", a);
    a = 5;
    int *ap;
    ap = &a;
    
    printf("Hex: %p\n", ap);    // %p ฐาน 16
    printf("Dec: %d\n", ap);    // %d ฐาน 10
    printf("Dec: %d\n", a);     // = 5
    printf("Dec: %d\n", &a);    // = ad
    printf("Dec: %d\n", *ap);   // = 5

    int x,y,z;
    x = 5;
    y = 10;
    add(x,y,&z);
    printf("x+y = %d\n",z);

}
void add(int x, int y, int *zp){
    *zp = x+y;
}
