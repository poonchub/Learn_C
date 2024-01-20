#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

// โครงสร้างข้อมูลสำหรับ Stack
struct Stack {
    int top;
    unsigned capacity;
    char* array;
};

// ฟังก์ชันสร้าง Stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (char*) malloc(stack->capacity * sizeof(char));
    return stack;
}

// ฟังก์ชันตรวจสอบว่า Stack เต็มหรือไม่
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// ฟังก์ชันตรวจสอบว่า Stack ว่างหรือไม่
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// ฟังก์ชันเพิ่มข้อมูลลงใน Stack
void push(struct Stack* stack, char item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// ฟังก์ชันนำข้อมูลออกจาก Stack
char pop(struct Stack* stack) {
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top--];
}

// ฟังก์ชันดึงข้อมูลจาก Stack โดยไม่ลบ
char peek(struct Stack* stack) {
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top];
}

// ฟังก์ชันตรวจสอบว่าเป็นตัวอักษรหรือไม่
int isOperand(char ch) {
    return isalnum(ch);
}

// ฟังก์ชันตรวจสอบลำดับความสำคัญของตัวดำเนินการ
int getPrecedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

// ฟังก์ชันแปลง Infix เป็น Postfix
void infixToPostfix(char* infix) {
    struct Stack* stack = createStack(MAX_SIZE);
    int i, j;

    for (i = 0, j = -1; infix[i]; ++i) {
        // กรณีเป็น Operand
        if (isOperand(infix[i]))
            infix[++j] = infix[i];
        // กรณีเป็น '('
        else if (infix[i] == '(')
            push(stack, infix[i]);
        // กรณีเป็น ')'
        else if (infix[i] == ')') {
            while (!isEmpty(stack) && peek(stack) != '(')
                infix[++j] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return; // น่าจะเกิดข้อผิดพลาด
            else
                pop(stack);
        }
        // กรณีเป็น Operator
        else {
            while (!isEmpty(stack) && getPrecedence(infix[i]) <= getPrecedence(peek(stack)))
                infix[++j] = pop(stack);
            push(stack, infix[i]);
        }
    }

    // นำข้อมูลที่เหลือใน Stack มาต่อท้าย Infix
    while (!isEmpty(stack))
        infix[++j] = pop(stack);

    // ปิดสตริงด้วย null character
    infix[++j] = '\0';

    // แสดงผลลัพธ์
    printf("Postfix: %s\n", infix);
}

int main() {
    char infix[MAX_SIZE];

    printf("Enter Infix Expression: ");
    gets(infix);

    infixToPostfix(infix);

    return 0;
}