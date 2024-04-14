import java.util.*;
public class functions2 {
    public static double calculateCircumference(double a){
    double result = 2 * 3.14 * a;
    return result;
}
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
        double a=sc.nextDouble();
       double result= calculateCircumference(a);
       System.out.println(result);
    }
}

