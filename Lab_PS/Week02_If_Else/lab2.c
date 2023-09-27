#include <stdio.h>
int main(){
    int chest,choice;


    printf("Measure under the arms around the widest part of your chest.\n");
    printf("Please enter your chest measurement in inches :");
    scanf("%d",&chest);
    
    if (chest<30 || chest>54){
        printf("Sorry, there is no suitable size for you.");
    } else if (chest<=35 && chest>29 ){
        printf("Your suitable size is \"SS\"");
    } else if (chest<=38 && chest>34 ){
        printf("Your suitable size is \"S\"");
    } else if (chest<=41 && chest>37 ){
        printf("Your suitable size is \"M\"");
    } else if (chest<=44 && chest>40 ){
        printf("Your suitable size is \"L\"");
    } else if (chest<=47 && chest>43 ){
        printf("Your suitable size is \"XL\"");
    } else if (chest<=50 && chest>46 ){
        printf("Your suitable size is \"XXL\"");
    } else if (chest<=54 && chest>49 ){
        printf("Your suitable size is \"XXXL\"");
    }


}
