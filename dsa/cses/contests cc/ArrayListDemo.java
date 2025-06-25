import java.util.ArrayList;
public class ArrayListDemo {
public static void main(String[] args) {
ArrayList ar=new ArrayList();
ar.add("Hi");
ar.add(500);
ar.add(4.5);

for(Object x:ar)
System.out.println(x);
}
}