import java.util.Scanner;
public class evenodd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number :");
        int n= sc.nextInt();
        // check if the number is positive or not
        if(n>0){
            System.out.println("positive integer");
            if(n%2==0){ // check number is even or odd

                System.out.println("number is even");

            }else{
                System.out.println("number is odd");
            }
        }else{
            System.out.println(" not a positive integer");
        }
    }

}// == is for comparison
