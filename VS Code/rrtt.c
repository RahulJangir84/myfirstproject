#include<stdio.h>
int main(){
    int r;
    int i;
    int j;
    int c;
    printf("enter the number of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            c=j*i;
            printf("%d ",c);
        }
        printf("\n");
        
    }
}