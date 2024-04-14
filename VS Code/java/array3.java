import java.util.Scanner;

public class array3 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        // System.out.println(a+"\n");
        
        String [] names=new String [a];
        for( int i=0;i<a;i++){
            // System.out.println(i+" ");
            names[i]=sc.next();
        }
        for(int i=0;i<a;i++){
            System.out.println(names[i]);
        }
    }
}
