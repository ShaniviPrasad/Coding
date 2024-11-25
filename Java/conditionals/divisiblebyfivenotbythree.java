import java.util.Scanner;
public class divisiblebyfivenotbythree {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        if(n%5==0 && n%3!=0){
            System.out.println("number is divisible by 5 not by 3");
        }
        else if(n%5==0 && n%3==0){
            System.out.println("number is divisible by both");
        }
        else if(n%3==0){
            System.out.println("number is only divisible by 3");
        }
        else {
            System.out.println("number is only divisible by 5");
        }
        
        
    }
}
/*
 &&- logical and
 //- logical or
 == - equal
 */
