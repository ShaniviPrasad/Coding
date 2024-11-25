import java.util.Scanner;
public class areaandperimeter {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the length of the rectangle");
        int l=sc.nextInt();
        System.out.println("enter the breadth of the rectangle");
        int b=sc.nextInt();
        int area=l*b;
        int p=2*(l+b);
        if(area>p)
        {
            System.out.println("area of the rectangle is greater than its perimeter");
        }
        if(p>area)
        {
            System.out.println("perimeter is greater than area of rectangle");
        }
        if(p==area){
            System.out.println("area and perimeter are equal");
        }
    }
}
// this code can be done using else if