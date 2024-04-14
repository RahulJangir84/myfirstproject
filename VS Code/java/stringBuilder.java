import java.util.*;
public class stringBuilder {
    public static void main(String[] args) {
        StringBuilder hi= new StringBuilder("Tony");
        System.out.println(hi);
         
        hi.setCharAt(0,'p');
        System.out.println(hi);

        hi.insert(2,'n');
        System.out.println(hi);

        hi.delete(0, 2);
        System.out.println(hi);
    }
}
