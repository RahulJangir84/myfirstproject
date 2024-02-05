#include<stdio.h>
int main(){
    int n;
    int j;
    int q;
    int t;
    int L;
    int r;
    int i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the values to be entered in array");
        scanf("%d",&a[i]);
    }
    for(r=0;r<n;r++){
        printf("the values stored in array is %d\n",a[r]);
    }
    for(i=n-1;i<n;i--){
    for(j=0;j<n;j++){
    if(a[j]>a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    }
}
printf("largest number is ");
for(j=1; j<=n; j++){
        printf("%d\n",a[j]);
}
}