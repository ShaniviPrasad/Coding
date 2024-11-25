import java.util.Scanner;// for input
public class inputvalue {
    // area of circle by input the value 
    
    public static void main(String[] args) {
    Scanner sc=new Scanner (System.in);  // for input
     // sc for scanner
     // scanner allow for the input
    // new scanner -creating new scanner
    // system.in- jo bhi hm keyboard ye mouse se input krte hai
    System.out.print("Enter the radius of the circle : ");
    int radius=sc.nextInt();// 
  // input the interger value
    double pi=3.14;
    double area=pi*radius*radius;
    System.out.println(area);
   }
}
