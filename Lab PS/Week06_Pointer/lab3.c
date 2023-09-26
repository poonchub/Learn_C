#include <stdio.h>
void read_area();
void convert_tothai();
void print_thai_area();

int sq_metre, rai, ngaan, sq_wa;

int main(){
    read_area();
    convert_tothai();
    print_thai_area();

}

void read_area(){
    printf("Enter the area (in square metres): ");
    scanf("%d",&sq_metre);
}

void convert_tothai(){
    rai = sq_metre/1600;
    sq_metre %= 1600;
    ngaan = (sq_metre/4)/100;
    sq_wa = (sq_metre/4)%100;
}

void print_thai_area(){
    printf("Rai: %d\n",rai);
    printf("Ngaan: %d\n",ngaan);
    printf("Square Wa: %d\n",sq_wa);
}