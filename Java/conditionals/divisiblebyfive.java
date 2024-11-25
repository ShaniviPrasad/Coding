//package conditionals;
import java.util.Scanner;
public class divisiblebyfive {
    public static void main(String[] args) 
    {

        Scanner sc =new Scanner(System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        if(n>0){

            System.out.println("number is positive");
            if(n%5==0){

                System.out.println("number is divisible by 5");
            }
            else{
                System.out.println("number is not divisible by 5");
            }

        }else{
            System.out.println("number is not positive");

        }
        
    }
}
