#include <stdio.h>

int main(){
    printf("int a, b;\n");
    int a, b;
    printf("&a = %p\n",&a);
    printf("&b = %p\n",&b);
    printf("\n");

    printf("a = 4, b = 6\n");
    a = 4;
    b = 6;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("\n");

    printf("int *ap, *bp;\n");
    int *ap, *bp;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("\n");

    printf("ap = &a;\n");
    ap = &a;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("*ap = %d\n",*ap);
    printf("ap = %d\n",&ap);
    printf("\n");

    printf("bp = &b;\n");
    bp = &b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("*ap = %d\n",*ap);
    printf("*bp = %d\n",*bp);
    printf("ap = %d\n",&ap);
    printf("bp = %d\n",&bp);
    printf("\n");

    printf("*ap += *bp;\n");
    *ap += *bp;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("*ap = %d\n",*ap);
    printf("*bp = %d\n",*bp);
    printf("ap = %d\n",&ap);
    printf("bp = %d\n",&bp);
    printf("\n");

    printf("*bp = *bp - *ap;\n");
    *bp = *bp - *ap;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("&a = %d\n",&a);
    printf("&b = %d\n",&b);
    printf("*ap = %d\n",*ap);
    printf("*bp = %d\n",*bp);
    printf("ap = %d\n",&ap);
    printf("bp = %d\n",&bp);
    printf("\n");
}