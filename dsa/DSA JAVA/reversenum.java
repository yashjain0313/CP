import java.util.Scanner;

public class reversenum {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        long a = in.nextLong();
        while(a>0)
        {  long x= a%10;
            a=a/10;
            System.out.print(x);
//muliply by 10 for ans in one integer a%10*10
        }
    }
    
}
