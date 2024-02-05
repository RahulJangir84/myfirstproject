#include<stdio.h>
int main(){
    char c;
    char e;
    printf("enter the first letter of the first subject that u have passed");
    scanf("%c",&c);
    printf("enter the first letter of the second subject that u have passed");
    scanf(" %c",&e);
    
    if (c=='S' && e=='M'){
        printf("you have been rewarerded 45 points");
    }
    else if (c=='M'){
        printf("you have been rewareded 15 points");
}
    else if (c=='S' ){
        printf("you have been rewareded 15 points");
    }
    else{
        printf("invlaid input");
    }

return 0;
}
