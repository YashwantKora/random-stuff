import java.util.Scanner;

public static void main(String args[]){
    Scanner scanner = new Scanner(System.in);

    String adjective1;
    String noun1;
    String adjective2;
    String verb1;
    String adjective3;

    System.out.println("adjective");
    adjective1 = scanner.nextLine();

    System.out.println("noun");
    noun1 = scanner.nextLine();

    System.out.println("adjective");
    adjective2 = scanner.nextLine();

    System.out.println("verb");
    verb1 = scanner.nextLine();

    System.out.println("adjective");
    adjective3 = scanner.nextLine();

    System.out.println("\nToday I went to a " + adjective1 + " zoo.");
    System.out.println("There I was standing next to a " + noun1 + '.');
    System.out.println(noun1 + " was " + adjective2 + " and " + verb1 + "!" );
    System.out.println("I was " + adjective3 + '!');

    scanner.close();
}
