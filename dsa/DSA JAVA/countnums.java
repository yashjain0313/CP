import java.util.Scanner;
public class countnums {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int f = in.nextInt();
        int ctr=0;
       

        while(a/10 !=0)
        {  if  (a%10==f)
          {  ctr++;}
          a=a/10;


        }
        System.out.println(ctr);

    }
    
}
