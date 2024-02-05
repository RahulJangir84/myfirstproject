#include<stdio.h>
int main(){
    int i;
    int k;
    int t;
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(t=r;t>i;t--){
            printf("_");
             }
             for(k=1;k<=i;k++){
                printf("*");
             }
        printf("\n");
    }

}