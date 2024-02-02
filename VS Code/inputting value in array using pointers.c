/*#include<stdio.h>
int main(){
    int a[5];
    int x=5;
    int *p=&a[4];
    *p = x;
    printf("%d",a[4]);
}*/
#include<stdio.h>
int main(){
    int i[5];
    int b;
    int *p ;
    p=&i;
    for(b=0;b<5;b++){
        printf("enter the number");
        scanf("%d",(p+b));
        
    }
    for(b=0;b<5;b++){
    printf("%d",*(p+b));
}
}