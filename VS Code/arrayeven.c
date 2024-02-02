#include<stdio.h>
int main(){
    int i;
    int j;
    int a[4];
    for(i=0;i<=3;i++){
    printf("enter the values:");
    scanf("%d",&a[i]);
    }
    
    for(j=0;j<=3;j++){
        if(a[j]%2==0){
        printf("%d",a[j]);
        }
        
    }
}
