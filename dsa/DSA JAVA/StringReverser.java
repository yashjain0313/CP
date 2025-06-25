import java.util.Scanner;

public class StringReverser {

    public static void reverse(String input) {
        int length = input.length();
        for (int i = length - 1; i >= 0; i--) {
            System.out.print(input.charAt(i));
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();
        StringReverser.reverse(input);
    }
}