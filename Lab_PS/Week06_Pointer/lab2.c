#include <stdio.h>
void read_area(int *);
void convert_tothai(int, int *, int *,int *);
void print_thai_area(int, int, int);

int main(){
    int sq_metre, rai, ngaan, sq_wa;
    read_area(&sq_metre);
    convert_tothai(sq_metre, &rai, &ngaan, &sq_wa);
    print_thai_area(rai, ngaan, sq_wa);

}

void read_area(int *sq_metre){
    printf("Enter the area (in square metres): ");
    scanf("%d",sq_metre);
}

void convert_tothai(int sq_metre,int *rai, int *ngaan, int *sq_wa){
    *rai = sq_metre/1600;
    sq_metre %= 1600;
    *ngaan = (sq_metre/4)/100;
    *sq_wa = (sq_metre/4)%100;
}

void print_thai_area(int rai, int ngaan, int sq_wa){
    printf("Rai: %d\n",rai);
    printf("Ngaan: %d\n",ngaan);
    printf("Square Wa: %d\n",sq_wa);
}