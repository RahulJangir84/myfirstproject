#include<stdio.h>
int main(){
    char a;
    char e;
    char f;
    printf("enter the first letter of the weekday");
    scanf("%c",&a);
    switch(a){
        case 'M':
        printf("the weekday is monday\n");
        break;
        case 'T':
         printf("choose the number:1 for tuesday and 2 for thrusday");
            scanf("%d",&e);
        if(e==1){
            printf("weeday is tuesday\n");
        } 
        else if(e==2){
            printf("weekday is thrusday\n");
        }
        
        case'W':
        printf("the weekday is wednesday\n");
        
        case 'S':
        printf("choose the number:3 for saturday and 4 for sunday");
            scanf("%d",&f);
        if(f==3){
            printf("weeday is saturday\n");
        } 
        else if(f==4){
            printf("weekday is sunday\n");
        }
        
}
}