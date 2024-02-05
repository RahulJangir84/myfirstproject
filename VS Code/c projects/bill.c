#include<stdio.h>
int main(){
    int a;
    int bill;
    printf("write the consumed the units");
    scanf("%d",&a);
    if(a>0 && a<=150000){
        bill=0.4*a;
    }
    if(a>150000 && a<=250000){
        bill=0.65*();
    }
    printf("the bill is %d",bill);
}