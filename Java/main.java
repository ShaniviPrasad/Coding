import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("enter the first number");
        int a=sc.nextInt();
        System.out.print("enter the second number");
        int b=sc.nextInt();
        System.out.print("enter the third number");
        int c=sc.nextInt();
        int d=a+b+c;
        System.out.println("total " + d);
    }
}
