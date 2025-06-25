import java.util.Scanner;

public class temperature {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        float c = in.nextFloat();
        float t=c*9/5+32;
        int d= (int)(t);
        System.out.println(d);

    }
}
