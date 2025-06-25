class animal {
    void SuperClass ()
    {
        System.out.println("animal super class");
    }


}
class cat {
    cat()
    {
        System.out.println("ghfhsrdgthfygj");
    }
}
class lion extends animal {
    void Subclass()
    {
        System.out.println( "lion sub class" );
    }
    void SuperClass ()
    {
        System.out.println("lion super class");
    }

}

public class Inheritance {
    public static void main(String[] args) {
        lion ab = new lion();
        ab.Subclass();
        ab.SuperClass();
        cat c = new cat();
        



        
    }
    
}
