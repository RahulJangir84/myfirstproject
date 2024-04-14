import java.util.*;

public class function4 {
   public static int calculatePower(int a, int b){
          double result= Math.pow(a, b);
          //here we used double bcz math.pow returns a 'double' 
          return (int)result;
          //here we used int bcz we cast the result to appear as int 
          //if we do not use int then we have  to make all int as as double
   }

public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
       int a=sc.nextInt();
       int b=sc.nextInt();
       int result= calculatePower(a, b);
       System.out.println(result);
    }
}
