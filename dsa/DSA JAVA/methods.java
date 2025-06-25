import java.util.Scanner;

public class methods {
    public static void main(String[] args) { 

        sum();


    }
        static void sum (){
            Scanner in = new Scanner(System.in)
            ;
            int a = in.nextInt();
            int b= in.nextInt();
            int sum = a+b;
            System.out.println("SUM of Nos is "+sum);

            // static int sum can be used for getting return value as integer 
            //int a = sum();
            //sum wil return value ;
        }
   
    
}
