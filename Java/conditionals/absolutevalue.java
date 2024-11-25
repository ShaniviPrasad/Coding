import java.util.Scanner;;
public class absolutevalue {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        // absolute value-round off negative wal ko positive ma convert krne hai
        if(n>0){
            System.out.println("the absolue value is :"+n);
        }
        else //if(n<0)
        {
            n=-(n);
            System.out.println("the absolue value is :"+n);
        }
    }
}
