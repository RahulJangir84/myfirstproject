import java.util.Scanner;

public class functions3 {
    public static boolean calculateAge(int a){
     if(a>18){
        return true;
     }
     else{
        return false;
     }
    }
    public static void main(String [] args){
        Scanner sc= new Scanner(System.in);
            int a=sc.nextInt();
            boolean age = calculateAge(a);
            System.out.println(age);
        }
    }

