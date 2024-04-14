import java.util.Scanner;

public class array2 {
    public static void main(String args[]){
         Scanner sc = new Scanner(System.in);
         int a=sc.nextInt();
         int [] marks=  new int[a];
         //taking input in array
         for(int i=0;i<a;i++){
            marks[i]=sc.nextInt();
         }
         int x=sc.nextInt();//jis number ko dhundna hai uske liye input lenge

         for(int i=0;i<a;i++){
            if(marks[i]==x){
                System.out.println("found at index" + i);
            }
         }
    }
}
