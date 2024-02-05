#include<stdio.h>
int main(){
 /*   int a=76;
    int *p;
    p=&a;
    printf("the value pointer is pointing is %x\n",p);
    printf("the value pointer is pointing is %x\n",*p);
    printf("the value pointer is pointing is %x\n",&p);
    printf("the value pointer is pointing is %x\n",a);
    printf("the value pointer is pointing is %x\n",&a);
}*/
int a;
int i;
int h=1;
int j;
printf("enter the value of a");
scanf("%d",&a);

    for(j=1;j<=a;j++){
        h=h*j;
    }
    printf("%d",h);
}
