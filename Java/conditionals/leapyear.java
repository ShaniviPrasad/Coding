//package conditionals;
import java.util.Scanner;
public class leapyear {
   public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the year");
    int n=sc.nextInt();
    //check if it is a leap year or not
    if(n%400==0){
        System.out.println("9leap year");
    }
    //else{
        //System.out.println("not a leap year"); 
    //}
        if(n%100==0){
            if(n%4!=0){
            System.out.println(" leap year");
        }
    }
        else{
            System.out.println("not a leap year");
        }
    
   } 
}
