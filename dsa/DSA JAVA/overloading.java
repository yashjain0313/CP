import java.util.Scanner;
public class overloading {
  static void fun(int a){
    System.out.println(a);

  }
  static void fun(String b){
    System.out.println(b);
  }
    public static void main(String[] args) {
      fun(20);
      fun("abcd");
        

    }
    //function overloading
    //error of ambiguity if no agruments are passed in the function
}
