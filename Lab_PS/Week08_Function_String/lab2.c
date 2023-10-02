#include <stdio.h>
#include <string.h>
#define LEN 20
int main(){
    char last_name[15], first_name[15];
    printf("Enter your last name> ");
    scanf("%s",&last_name);
    printf("Enter your first name> ");
    scanf("%s",&first_name);

    char full_name[LEN];
    int x = strlen(first_name);
    int y = strlen(last_name);

    if ((x+y)<LEN){
        strcat(full_name,first_name);
        strcat(full_name," ");
        strcat(full_name,last_name);
        printf("%s",full_name);
    }
    else{
        char x[2];
        strncpy(x, &first_name[0],1);
        x[1] = '\0';
        strcat(full_name,x);
        strcat(full_name,". ");
        strcat(full_name,last_name);
        printf("%s",full_name);
    }
}