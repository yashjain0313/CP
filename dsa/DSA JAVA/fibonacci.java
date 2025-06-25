import java.util.Scanner;

public class fibonacci{

    public static void main(String[] args) {
            int a =0;
            int b= 1;
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
           for (int i=0;i<n;i++)
           { if(i==0)
            {System.out.print(a);}
            else if (i==1)
            {System.out.print(b);}
            else
            {System.out.print(a+b);
            int y=a+b;
                a=b;
        b=y;}
        

           }
    }
}