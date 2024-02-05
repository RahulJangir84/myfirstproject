#include<stdio.h>
int main(){
    int a[4];
    int i;
    int j;
    int b;
    for(i=0;i<4;i++){
    printf("enter the values: \n");
    scanf("%d",&a[i]);
    }
    for(j=0;j<4;j++)
    {
        if(a[j]>a[j+1])
        {
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
        }

    }
    printf("the largest number is %d \n",a[3]);
    printf("the smaleest number is %d",a[0]);      
    }

