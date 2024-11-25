import java.util.Scanner;
public class percentage {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the percentage");
        int n=sc.nextInt();
        if(n>=91 && n<=100){
            System.out.println("excellent");
        }
        else if(n>=81 && n<=90){
            System.out.println("very good");
        }
        else if(n>=71 && n<=80){
            System.out.println(" good");
        }
        else if(n>=61 && n<=70){
            System.out.println("can do better");
        }
        else if(n>=51 && n<=60){
            System.out.println("average");
        }
        else if(n>=41 && n<=50){
            System.out.println("below average");
        }
        else{
            System.out.println("fail");
        }
 
    }
}
