#include<stdio.h>
int main(){
	
	int i,j,k;
	
	printf("How many values u want to enter in the array \n");
	scanf("%d",&j);
	int a[j];
	
	
	for(i=0;i<j;i++){
		printf("Enter value \n");
		scanf("%d",&a[i]);
	}
	
	for(k=0;k<j;k++){
		printf("%d \n",a[k]);
	}	
	
	
return 0;
	
}