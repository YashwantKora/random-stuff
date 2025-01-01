import java.util.Scanner;
public class Shopping_cart {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);

        String item;
        double price;
        char currency = '$';
        double total;
        int quantity;

        System.out.print("What would you like to buy?: ");
        item = scanner.nextLine();

        System.out.print("What is the price for each?: ");
        price = scanner.nextDouble();

        System.out.print("How many would you like to buy?: ");
        quantity = scanner.nextInt();
    
        total = price * quantity;
        System.out.println("You have bought " + quantity + " " + item + "/s");
        System.out.println("Your total is: " + currency + total);



        scanner.close();
    }
}
