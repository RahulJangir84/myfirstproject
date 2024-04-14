public class pattern {
    public static void main(String[] args) {
       // pattern star
/*for(i=1;i<=4;i++){
    for(j=1;j<=5;j++){
        if(i == 1 || j == 1 || i== 4 || j == 5){
             System.out.print("*");
        }
        else{
            System.out.print(" ");
        }
    } 
       System.out.print("\n");
}*/
/*for(i=1;i<=4;i++){
    for(j=4;j>=i;j--){
        System.out.print("*");
    }
    System.out.println();
}*/
/*int z;
for(i=1;i<=4;i++){
    for(j=1;j<=4-i;j++){
        System.out.print(" ");
    }
    for(j=1;j<=i;j++){
    System.out.print("*");
    }
    System.out.println();
    
    
}*/
/*int z;

for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
       System.out.print(j);
}
System.out.println();
}*/
int i;
int j;
/*int sum=0;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        sum = sum+1;
        System.out.print(sum + " ");
    }
    System.out.println();
} */
/*for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        if((i+j)%2==0){
            System.out.print("1");
        }
        else{
            System.out.print("0");
        }
    }
    System.out.println();
}*/

for(i=1;i<=4;i++){
    for(j=1;j<=i;j++){
        System.out.print("*");
    }
    int n=2*(4-i);
        for(j=1;j<=n;j++);
    System.out.println("/");
}
for(j=1;j<=i;j++){
    System.out.print("*");
}
    }
}
