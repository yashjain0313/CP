import java.util.*;

public class prime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a= in.nextInt();
        int ctr=0;
        if(a==0 ||a==1)
        {ctr=1; }
        else
        {for(int i=2 ;i<=a/2;i++)
        {
            if(a%i==0)
            {ctr=1;
                
            break;}
    }

    }
    if(ctr==0)
    {System.out.println("TRUE");}
    else
    {System.out.println("FAlSE");}
}
    

}