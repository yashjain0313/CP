public class swap {
    public static void main(String[] args) {
        int one=10;
        int two=20;
        swap(one,two);
    }

    static void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        System.out.println(a+" "+b);

       
    }
    
}
