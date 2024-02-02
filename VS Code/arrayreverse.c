#include<stdio.h>
int main(){
    int i;
    int j;
    int a[4];
    for(i=0;i<=3;i++){
    printf("enter the values:");
    scanf("%d",&a[i]);
    }
    
    for(j=3;j>=0;j--){
        printf("%d",a[j]);
        
    }
}