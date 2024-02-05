#include<stdio.h>
#include<math.h>


main()
{
    float p,r,n,t;
printf("enter the \n principle \n rate \n time \n ");
scanf("%f",&p);
printf("%f",p);
scanf("%f",&r);
printf("%f",r);
scanf("%f",&n);
printf("%f",n);
scanf("%f",&t);
printf("%f",t);
float first = 1+r/n;
float power = n*t;
float second = pow(first,power);
float amount = p*second;
printf("the compound of the given amount is %d ", amount);

}