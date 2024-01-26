#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_STR 100

typedef struct nd {
    char c;
    struct nd *next;
}node;
node *top = NULL;

// function เพิ่มข้อมูลลง stack
void push(int x){
    node *n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = x;
}

// function ลบข้อมูลตัวสุดท้าย/ตัวบนสุด ใน stack และส่งคืนค่าที่ลบออก
char pop(){
    char p;
    node *n;
    n = top;
    top = top->next;
    p = n->c;
    free(n);
    return p;
}

// function เช็คข้อมูลตัวสุดท้าย/ตัวบนสุด(top) ใน stack ว่าว่างหรือไม่ และส่งคืนข้อมูลที่อยู่ตำแหน่ง top
char* stacktop(){
    if (top==NULL){
        return NULL;
    }
    else {
        return &(top->c);
    }
}

// function เช็ค operator
void calculate(char *ck){
    int operand2 = pop();
    int operand1 = pop();
    int c;

    if (*ck == '+'){
        c = (operand1)+(operand2);
        push(c);
    }
    else if (*ck == '-'){
        c = (operand1)-(operand2);
        push(c);
    }
    else if (*ck == '*'){
        c = (operand1)*(operand2);
        push(c);
    }
    else if (*ck == '/'){
        c = (operand1)/(operand2);
        push(c);
    }
    else if (*ck == '^'){
        c = (operand1)^(operand2);
        push(c);
    }
}

void printstack(){
    node *current = top;
    int count = 0;
    char oper[MAX_STR] = "";
    while (current != NULL){
        count++;
        current = current->next;
    }
    for (int i = 0; i < count; i++){
        node *step = top;
        for (int j = count - i - 1; j > 0; j--){
            step = step->next;
        }
        printf("%d",step->c);
        if (i != count - 1){
            printf(", ");
        }
    }
}

int main(){

    printf("Enter postfic expression: ");
    char str[MAX_STR];
    int last;
    scanf("%s",str);

    printf("----------------------------------------------------\n");
    printf("   %-10s%-13s%s\n","Step","Symbol","Stack");
    printf("----------------------------------------------------\n");

    for (int i=0 ; i<strlen(str); i++){
        printf("    %-10d %-11c",i+1,str[i]);
        for (int j=0 ; j<i+1; j++){
            if (isdigit(str[j])){
                push(str[j]-'0');
            }
            else {
                calculate(&str[j]);
            }
        }
        printstack();
        while (stacktop() != NULL){
            last = pop();   
        }
        printf("\n");
    }
    printf("----------------------------------------------------\n");
    printf("ผลลัพธ์ก็คือค่าสุดท้ายที่ได้ใน Stack ซึ่งคือ %d",last);
}