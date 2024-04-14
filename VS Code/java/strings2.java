import java.util.Scanner;

public class strings2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        int totalLength=0;
        String [] name=new String[a];
        // sc.nextLine();
        for(int i=0;i<a;i++){
            name[i]=sc.next();
            totalLength +=name[i].length();
        }
        System.out.println(totalLength);
    }
}
