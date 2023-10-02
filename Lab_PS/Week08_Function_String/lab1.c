#include <stdio.h>
#include <string.h>
int main(){
    char full_names[5][15] = {"G. Washington","J. Adams", "T. Jefferson", "J. Madison", "R. Sherman"};
    char initials[5][2], last_name[5][15];
    
    printf("%18s%25s\n","Innitial First Name","Last Name");
    for (int i = 0 ; i<5 ; i++){
        strncpy(initials[i], &full_names[i][0],2);
        initials[i][2] = '\0';
        strncpy(last_name[i], &full_names[i][3],13);
        last_name[i][15] = '\0';

        printf("%19s%25s\n",initials[i],last_name[i]);
    }
}