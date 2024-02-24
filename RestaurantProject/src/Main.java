import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("***** Welcome to Nerd Restaurant *****");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the maximum capacity of the restaurant menu: ");
        int capacity = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        RestaurantMenu menu = new RestaurantMenu(capacity);
        boolean exit = false;

        while (!exit) {
            System.out.println("\nMenu Options:");
            System.out.println("1. Add Item");
            System.out.println("2. Display Menu");
            System.out.println("3. Update Item Price");
            System.out.println("4. Delete Item");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");

            int selection = scanner.nextInt();
            scanner.nextLine();

            switch (selection) {
                case 1:
                    System.out.print("Enter item name: ");
                    String itemName = scanner.nextLine();
                    System.out.print("Enter item price: ");
                    double itemPrice = scanner.nextDouble();
                    menu.addItem(itemName, itemPrice);
                    break;
                case 2:
                    menu.displayMenu();
                    break;
                case 3:
                    System.out.print("Enter item name to update: ");
                    String itemNameToUpdate = scanner.nextLine();
                    System.out.print("Enter new price: ");
                    double newPrice = scanner.nextDouble();
                    menu.updateItemPrice(itemNameToUpdate, newPrice);
                    break;
                case 4:
                    System.out.print("Enter item name to be deleted: ");
                    String itemToDelete = scanner.nextLine();
                    menu.deleteItem(itemToDelete);
                    break;
                case 5:
                    exit = true;
                    break;
                default:
                    System.out.println("Invalid selection!.");
            }
        }

        System.out.println("Thanks for using Nerd restaurant menu.");
        scanner.close();
    }
}
