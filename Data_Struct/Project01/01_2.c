#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 100

// สร้างโครงสร้างข้อมูล
typedef struct nd{
    char c;
    struct nd *next;
} node;
node *top = NULL;

// ฟังก์ชันเพิ่มข้อมูลลง stack
void push(char x){
    node *n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = x;
}

// ฟังก์ชันลบข้อมูล top ใน stack และส่งคืนค่าที่ลบออก
char pop(){
    char p;
    node *n;
    n = top;
    top = top->next;
    p = n->c;
    free(n);
    return p;
}

// ฟังก์ชันเช็คข้อมูล top ใน stack ว่าว่างหรือไม่ 
char *stacktop(){
    if (top == NULL){
        return NULL;
    }
    else{
        return &(top->c);
    }
}

// ฟังก์ชันเช็คลำดับความสำคัญของ operator
int checkpr(char temp){
    int pr;
    if (temp == '('){
        pr = 0;
    }
    else if (temp == '^'){
        pr = 3;
    }
    else if (temp == '*' || temp == '/'){
        pr = 2;
    }
    else if (temp == '+' || temp == '-'){
        pr = 1;
    }
    return pr;
}

// ฟังก์ชันเช็ค operator
void checkoper(char *ck, char ops[]){
    if (stacktop() == NULL){
        push(*ck);
    }
    else {
        if (checkpr(*ck) <= checkpr(*stacktop())){
            while ((stacktop() != NULL) && (checkpr(*ck) <= checkpr(*stacktop()))){
                char temp = pop();
                strncat(ops, &temp, 1);
            } 
        }
        push(*ck);      // ทำการบันทึก operator ลง stack
    }
}

// ฟังก์ชันแสดงค่าที่อยู่ใน stack
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
        strncat(oper, &step->c, 1);
    }
    printf("%-13s", oper);
}

// ฟังก์ชันเปลี่ยน infix เป็น postfix
void infixtopostfix(char str[], char ops[], int i){
    for (int j = 0; j < i + 1; j++){
        if (str[j] == '('){
            push(str[j]);
        }
        else if (str[j] == ')'){
            while ((*stacktop() != '(') && stacktop() != NULL){
                char temp = pop();
                strncat(ops, &temp, 1);
            }
            pop();
        }
        else if (isdigit(str[j]) || isalpha(str[j])){
            strncat(ops, &str[j], 1);
        }
        else{
            checkoper(&str[j], ops);
        }
    }

    if (i==strlen(str)){
        while (stacktop() != NULL){
            char temp = pop();
            strncat(ops, &temp, 1);
        }
    }
    printstack();
    printf("%s\n", ops);
}

int main(){
    printf("Enter infic expression: ");
    char str[MAX_STR];

    scanf("%s", str);
    str[strlen(str) + 1] = ' ';     // เพิ่มจำนวนข้อมูลใน str[] อีก 1 ตัวเพื่อเพิ่ม loop อีก 1 รอบ

    printf("----------------------------------------------------\n");
    printf("   %-10s%-13s%-13s%s\n", "Step", "Symbol", "Stack", "Output");
    printf("----------------------------------------------------\n");

    for (int i = 0; i <= strlen(str); i++){     // ทำการวน loop ตามจำนวนสมาชิกใน str[]
        char ops[MAX_STR] = "";
        if (i == strlen(str)){
            printf("    %-10d %-11c", i + 1, ' ');
            infixtopostfix(str, ops, i);
            printf("----------------------------------------------------\n");
            printf("ผลลัพธ์ของนิพจน์แบบ Postfix คือ %s", ops);
        }
        else {
            printf("    %-10d %-11c", i + 1, str[i]);
            infixtopostfix(str, ops, i);
            while (stacktop() != NULL){
                pop();
            }
        }
    }
}