import java.util.Scanner;
public class remainder {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the First number");
        int a=sc.nextInt();
        System.out.println("Enter the Second number");
        int b=sc.nextInt();
        if (a>b)
        {
        int rem=a%b;
        System.out.println("remainder when a is divided by b: "+ rem);
       } 
       else{
        System.out.println("a is smaller then b");
    }





    }
}
