/*#include<stdio.h>
int x=10;
int main(){
    int x=20;
    printf("%d",x);  
}*/
#include<stdio.h>
int main(){
    int r;
    int a;
    int i;
    printf("enter the number");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(a=1;a<=i,a++){
            c=a*i;
            printf(" %d",c);
        }
        printf("\n");
       
    }
}