import java.util.Scanner;

public class armstrong {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a= in.nextInt();
        int y=a;
        int sum =0;
        while(a>0)
        {
          sum= sum + (a%10)*(a%10)*(a%10);
          a=a/10;

        }   
        System.out.println(sum);
        if(sum==y)
        System.out.println("YES");
        else
        System.out.println("NO");


    } 
    
}
