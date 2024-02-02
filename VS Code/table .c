#include<stdio.h>
int main(){
    int i;
    int a;
    printf("enter the number u have to start");
    scanf("%d",&a);
    int b;
    printf("enter the number u have to go");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        printf("%d,%d,%d\n",i,i*i,i*i*i);
    }
}