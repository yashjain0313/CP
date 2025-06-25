import java.util.Scanner;

public class naturalsum {
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int t =in.nextInt();
        int sum=0;
        while(t>0){
            sum=sum+t;
            t--;
        }
        System.out.println(sum);
    }
    
}
