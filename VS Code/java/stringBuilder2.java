//to make hello ans olleh
public class stringBuilder2{
    public static void main(String[] args) {
        StringBuilder sb= new StringBuilder("hello");
        for (int i=0;i<sb.length()/2;i++){//half string mai loop chalyenge 
            int front=i;
            int back=sb.length()-1-i;

            char a=sb.charAt(front);
            char b=sb.charAt(back);
            

            sb.setCharAt(front,b);
            sb.setCharAt(back, a);
            
        }
        System.out.println(sb);
    }
}
//time complexity of this string is O(n)   bcz it runs form 0 to n/2