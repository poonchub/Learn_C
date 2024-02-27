#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX_STR 100

// function สร้าง linked list
typedef struct nd {
    char c;
    struct nd *next;
}node;
node *top = NULL;

// function สร้าง linked list
typedef struct Node {
    char dataStr[MAX_STR];
    struct Node* nextStr;
} Node;
Node* topStr = NULL;

// function เพิ่มข้อมูลลง stack
void push(int x){
    node *n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = x;
}

// function เพิ่มข้อมูลลง stack
void pushStr(char *x) {
    Node* n = malloc(sizeof(Node));
    strcpy(n->dataStr, x);  //ใช้เพื่อ copy Sting ที่มีความยาวหลายตัวจากX ไป DataStr
    n->nextStr = topStr;
    topStr = n;
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

// function ลบข้อมูลตัวสุดท้าย/ตัวบนสุด ใน stack และส่งคืนค่าที่ลบออก
char* popStr() {
    char* p = malloc(MAX_STR * sizeof(char));
    Node* n = topStr;
    topStr = topStr->nextStr;
    strcpy(p, n->dataStr);//ใช้เพื่อ copy Sting ที่มีความยาวหลายตัว
    free(n);
    return p;
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
        c = pow((operand1),(operand2));
        push(c);
    }
}

// function เช็ค operator
void calculateStr(char* ck) {
    char* operand2 = popStr();
    char* operand1 = popStr();
    char temp[MAX_STR];

    if (*ck == '+' || *ck == '-' || *ck == '*' || *ck == '/' || *ck == '^') {
        sprintf(temp, "(%s%c%s)", operand1, *ck, operand2);
        pushStr(temp);
    }
}

// ฟังก์ชันแสดงค่าที่อยู่ใน stack
void printstack(){
    node *current = top;
    int count = 0;
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

// ฟังก์ชันแสดงค่าที่อยู่ใน stack
void printstackStr() {
    Node* current = topStr;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->nextStr;
    }
    for (int i = 0; i < count; i++) {
        Node* step = topStr;
        for (int j = count - i - 1; j > 0; j--) {
            step = step->nextStr;
        }
        printf("%s", step->dataStr);
        if (i != count - 1) {
            printf(", ");
        }
    }
}


//function main
int main(){
    printf("Enter postfix expression: ");
    char str[MAX_STR];
    scanf("%s",str);
    
    printf("----------------------------------------------------\n");
    printf("   %-10s%-13s%s\n","Step","Symbol","Stack");
    printf("----------------------------------------------------\n");
    int check=0;
    for (int i=0 ; i<strlen(str); i++){
        printf("    %-10d %-11c",i+1,str[i]);
        if (isdigit(str[i])) {
            push(str[i] - '0');
            check = 1;
        }
        else if (isalpha(str[i])) {
            char temp[MAX_STR];
            temp[0] = str[i];
            temp[1] = '\0';
            pushStr(temp);
        } else {
            if (check == 1) {
                calculate(&str[i]);
            } else {
                calculateStr(&str[i]);
            }
        }
        if (check == 1) {
            printstack();
        }else {
            printstackStr();
        }
        printf("\n");
    }
    printf("----------------------------------------------------\n");
    if (check == 1) {
        if (top != NULL) {
            printf("Ans = %d\n", pop());
        } else {
            printf("Error: No data.\n");
        }
    } else {
        if (topStr != NULL) {
            printf("ผลลัพธ์ก็คือค่าสุดท้ายที่ได้ใน Stack ซึ่งคือ %s\n", popStr());
        } else {
            printf("Error: No data.\n");
        }
    }
}