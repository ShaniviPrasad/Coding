import java.util.Scanner;

public class costpriceandsellingprice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the cost price of the item");
        double cp = sc.nextDouble();
        System.out.println("enter the selling price of the item");
        double sp = sc.nextDouble();
        if (sp > cp) {
            double profit = (sp - cp);
            System.out.println("profit of the item :" + profit);
        } else {
            double loss = (sp - cp);
            System.out.println("loss of the item :" + loss);
        }
    }
}
    