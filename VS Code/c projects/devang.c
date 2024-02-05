#include<stdio.h>
int main(){
    int n,i;
    printf("the no. of input:");
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    printf("the given array is\n");
    for(i=0; i<n; i++){
        printf("%d\n", A[i]);
    }
    for(i=n-1; i<n; i--){
        for(int j=0; j<i; j++){
            if(A[j]>A[j+1]){
                int y= A[j];
                A[j]=A[j+1];
                A[j+1]=y;
            }
        }
    }
    printf("the assending order of the array is-\n");
    for(i=0; i<n; i++){
        printf("%d\n",A[i]);
    }
    return 0;
}