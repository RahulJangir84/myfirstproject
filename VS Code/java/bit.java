import java.util.Scanner;

public class bit {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a=5;
        int bit=2;
        int mask= 1<<bit;

        //clear bit
        // int firstNumber=~(a<<bit);
        // int secondNumber=(firstNumber & a);
        // System.out.println(secondNumber);
        
        //set bit
        // int newNumber=(mask | a);
        // System.out.println(newNumber);

        //get bit
//         if((mask & a)==1){
// System.out.println("the bit is 1");
//         }
//         else{
//             System.out.println("the bit is 0");
//         }
    }
}
