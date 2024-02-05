#include<stdio.h>
int main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z'){
        printf("entered character is alphabet");
    }
    else if(a>='1' && a<='255'){
        printf("entered character is number");
    }
    else {
        printf("entered character is special symbol");
    }

}