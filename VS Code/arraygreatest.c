#include<stdio.h>
int main(){
    int a[4];
    int i;
    int j;
    int bhalu;
    for(i=0;i<4;i++){
        printf("enter the values");
        scanf("%d",&a[i]);
    }
    for(j=0;j<4;j++){
        if(a[j]>a[j+1]){
            bhalu=a[j];
            a[j]=a[j+1];
            a[j+1]=bhalu;

        }
        
    }
    printf("the greatest number is %d",a[3]);
    
}