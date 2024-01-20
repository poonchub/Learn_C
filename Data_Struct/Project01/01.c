#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct nd {
    char c;
    struct nd *next;
}node;
node *top = NULL;

// function เพิ่มข้อมูลลง stack
void push(char x){
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

// function เช็คลำดับความสำคัญของ operator
int checkpr(char temp){
    int pr;
    if (temp=='('){
        pr = 0;
    }
    else if (temp=='^'){
        pr = 3;
    }
    else if (temp=='*' || temp=='/'){
        pr = 2;
    }
    else if (temp=='+' || temp=='-') {
        pr = 1;
    }
    return pr;
}

// function เช็ค operator
void checkoper(char *ck){
    // ถ้า top ว่าง ให้บันทึก operator ลง stack เลย
    if (stacktop()==NULL){
        push(*ck);
    }

    // ถ้า top ไม่ว่าง
    else {
        // ถ้า operator ที่รับเข้ามาสำคัญน้อยกว่าหรือเท่า operator ที่ตำแหน่ง top
        if (checkpr(*ck)<=checkpr(*stacktop()))
            // ให้วน loop เมื่อ operator ที่รับเข้ามาสำคัญน้อยกว่าหรือเท่า operator ที่ตำแหน่ง top และ top ไม่ว่าง เพื่อ pop ข้อมูลออกจาก stack
            while ((stacktop()!=NULL) && (checkpr(*ck)<=checkpr(*stacktop())))
                printf("%c ",pop());
            
        
        // ทำการบันทึก operator ลง stack
        push(*ck);
    }
}

void printstack(){
    while (stacktop() != NULL){
        printf("%c ", pop());
    }
}

int main(){
    char ch;
    int step = 1;
    printf("Enter infix expression: ");
    while ((ch = getchar()) != '\n'){
        if (step==1){
            printf("---------------------------------------------------------------\n");
            printf("%-10s%-15s%-15s%s\n",&"Step",&"Symbol",&"Stack",&"Output");
            printf("---------------------------------------------------------------\n");
        }

        if (isdigit(ch) || isalpha(ch)){
            printf("%c ",ch);
        }
        else if (ch == '('){
            push(ch);
        }
        else if (ch == ')'){
            while ((*stacktop()!='(') && stacktop() != NULL)
                printf("%c ", pop());
            pop();
        }
        else {
            checkoper(&ch);
        }

        step++;
    }
  
    printstack();
}