/*#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%1==a || a%a==a){
        printf("entered number is prime number",a);
    }
}*/
#include <stdio.h>
int main()
{

   /* int a[5]={1,2,3,4,5};
    int *p= &a[0];
    printf("%d\n",&a[0]);
    printf("%d\n",*p);
    printf("%d\n",p+1);
    printf("%d\n",*p+3);
    printf("%d\n",&a[1]);
    printf("%d\n",++*p);
    printf("%d\n",*p+4);
    printf("%d\n",*p++);
    printf("%d\n",*(p+2));
   */
  int a;
  int p=0;
  int t;
  printf("enter the number");
  scanf("%d",&a);
  for(t=1;t<=a;t++){
    if(a%t==0){
        p=p+1;
    }
  }
  if(p==2){
    printf("the number is prime");
  }
  else {
    printf("the number is not prime");
  }
   
    
}
