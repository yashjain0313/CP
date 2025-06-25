import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        int a,b,c;
        Scanner in = new Scanner(System.in);
        while(true)
        {a= in.nextInt();
        b=in.nextInt();
        c=in.next().trim().charAt(0);
        if(c=='+')
        System.out.println(a+b);
        else if (c=='-')
        System.out.println(a-b);
        else if (c=='*')
        System.out.println(a*b);
        else if (c=='/')
       System.out.println(a/b);
        else 
        System.out.println( "Invalid input");
        break;



         }
    }
    
}
