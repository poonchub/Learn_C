#include <stdio.h>
void check_letter(char);
void check_vowel(char);
char to_uppercase(char);
char to_lowercase(char);

int main(){
    char s;
    printf("Enter a letter: ");
    scanf("%c",&s);
    check_letter(s);

}
void check_letter(char s1){
    int ascii = s1;
    if ((s1>=65 && s1<=90)||(s1>=97 && s1<=122)){
        if (s1>=65 && s1<=90){
            char m = to_lowercase(s1);
            int asc = s1;
            printf("%c is converter to %c.\n",asc,m);
            check_vowel(s1);
            
        }
        else {
            char n = to_uppercase(s1);
            int asc = s1;
            printf("%c is converter to %c.\n",asc,n);
            check_vowel(s1);
        }
    }
    else {
        printf("%c is not a letter.",s1);
    }

}
void check_vowel(char s2){
    int ascii = s2;
    if(ascii==65 || ascii==69 || ascii==73 || ascii==79 || ascii==85){
        char c = ascii;
        printf("%c is a vawel.\n",c);
    }else if ((ascii==97 || ascii==101 || ascii==105 || ascii==111 || ascii==117)){
        char c = ascii;
        printf("%c is a vawel.\n",c);
    }else {
        char c = ascii;
        printf("%c is a consonant.\n",c);
    }
}
char to_uppercase(char s3){
    int ascii = s3;
    char c = (ascii-32);

}
char to_lowercase(char s4){
    int ascii = s4;
    char c = (ascii+32);
}