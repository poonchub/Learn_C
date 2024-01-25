#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 100

typedef struct nd
{
    char c;
    struct nd *next;
} node;
node *top = NULL;

// function เพิ่มข้อมูลลง stack
void push(char x)
{
    node *n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = x;
}

// function ลบข้อมูลตัวสุดท้าย/ตัวบนสุด ใน stack และส่งคืนค่าที่ลบออก
char pop()
{
    char p;
    node *n;
    n = top;
    top = top->next;
    p = n->c;
    free(n);
    return p;
}

// function เช็คข้อมูลตัวสุดท้าย/ตัวบนสุด(top) ใน stack ว่าว่างหรือไม่ และส่งคืนข้อมูลที่อยู่ตำแหน่ง
// top
char *stacktop()
{
    if (top == NULL)
    {
        return NULL;
    }
    else
    {
        return &(top->c);
    }
}

// function เช็คลำดับความสำคัญของ operator
int checkpr(char temp)
{
    int pr;
    if (temp == '(')
    {
        pr = 0;
    }
    else if (temp == '^')
    {
        pr = 3;
    }
    else if (temp == '*' || temp == '/')
    {
        pr = 2;
    }
    else if (temp == '+' || temp == '-')
    {
        pr = 1;
    }
    return pr;
}

// function เช็ค operator
void checkoper(char *ck)
{
    // ถ้า top ว่าง ให้บันทึก operator ลง stack เลย
    if (stacktop() == NULL)
    {
        push(*ck);
    }

    // ถ้า top ไม่ว่าง
    else
    {
        // ถ้า operator ที่รับเข้ามาสำคัญน้อยกว่าหรือเท่า operator ที่ตำแหน่ง top
        if (checkpr(*ck) <= checkpr(*stacktop()))
            // ให้วน loop เมื่อ operator ที่รับเข้ามาสำคัญน้อยกว่าหรือเท่า operator ที่ตำแหน่ง top
            // และ top ไม่ว่าง เพื่อ pop ข้อมูลออกจาก stack
            while ((stacktop() != NULL) && (checkpr(*ck) <= checkpr(*stacktop())))
                printf("%c ", pop());

        // ทำการบันทึก operator ลง stack
        push(*ck);
    }
}
void printstack()
{
    while (stacktop() != NULL)
    {
        char st = pop();
        printf("%c ", st);
    }
}

int main()
{

    printf("Enter postfic expression: ");
    char str[MAX_STR];
    char ops[MAX_STR];
    int last;
    scanf("%s", str);
    str[strlen(str) + 1] = ' ';

    printf("----------------------------------------------------\n");
    printf("   %-10s%-13s%-13s%s\n", "Step", "Symbol", "Stack", "Output");
    printf("----------------------------------------------------\n");

    for (int i = 0; i < strlen(str) + 1; i++)
    {
        if (i == strlen(str))
        {
            printf("    %-10d %-11c", i + 1, ' ');
            for (int j = 0; j < i + 1; j++)
            {
                if (str[j] == '(')
                {
                    push(str[j]);
                    ops[j] = str[j];
                }
                else if (str[j] == ')')
                {
                    while ((*stacktop() != '(') && stacktop() != NULL)
                        printf("%c", pop());
                    pop();
                }
                else if (isdigit(str[j]) || isalpha(str[j]))
                {
                    printf("%c", str[j]);
                }
                else
                {
                    checkoper(&str[j]);
                }
            }
            printstack();
            printf("\n");
        }

        if (i < strlen(str) + 1)
        {
            if (i < strlen(str))
            {
                printf("    %-10d %-11c", i + 1, str[i]);
            }
            else
            {
                printf("----------------------------------------------------\n");
                printf("ผลลัพธ์ของนิพจน์แบบ Postfix คือ ");
            }

            for (int j = 0; j < i + 1; j++)
            {
                if (str[j] == '(')
                {
                    push(str[j]);
                }
                else if (str[j] == ')')
                {
                    while ((*stacktop() != '(') && stacktop() != NULL)
                        printf("%c", pop());
                    pop();
                }
                else if (isdigit(str[j]) || isalpha(str[j]))
                {
                    printf("%c", str[j]);
                }
                else
                {
                    checkoper(&str[j]);
                }
            }
            while (stacktop() != NULL)
            {
                pop();
            }
            printf("\n");
        }
    }
}