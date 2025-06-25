
public class Apple extends Fruit {
    public Apple(String name, String taste, int size) {
        super(name, taste, size);
    }

    
    public void eat() {
        System.out.println("Eating an " + name + " with taste " + taste);
    }
}
public class Fruit {
    private String name;
    private String taste;
    private int size;

    public Fruit(String name, String taste, int size) {
        this.name = name;
        this.taste = taste;
        this.size = size;
    }

    public void eat() {
        System.out.println("Eating a " + name + " with taste " + taste);
    }
}