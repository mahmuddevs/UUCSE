public class RestaurantMenu {
    private Menu[] menuItems;
    private int itemCount;
    private final int capacity;

    public RestaurantMenu(int capacity) {
        this.capacity = capacity;
        menuItems = new Menu[capacity];
        itemCount = 0;
    }

    public void addItem(String name, double price) {
        if (itemCount < capacity) {
            menuItems[itemCount] = new Menu(name, price);
            itemCount++;
            System.out.println("Item added successfully.");
        } else {
            System.out.println("Menu is full. Cannot add more items.");
        }
    }

    public void displayMenu() {
        if (itemCount == 0) {
            System.out.println("Menu is empty.");
        } else {
            System.out.println("Restaurant Menu:");
            for (int i = 0; i < itemCount; i++) {
                System.out.println(menuItems[i]);
            }
        }
    }

    public void updateItemPrice(String itemName, double newPrice) {
        boolean found = false;
        for (int i = 0; i < itemCount; i++) {
            if (menuItems[i].getName().equalsIgnoreCase(itemName)) {
                menuItems[i].setPrice(newPrice);
                found = true;
                System.out.println("Price updated successfully.");
                break;
            }
        }
        if (!found) {
            System.out.println("Item not found in the menu.");
        }
    }

    public void deleteItem(String itemName) {
        boolean found = false;
        for (int i = 0; i < itemCount; i++) {
            if (menuItems[i].getName().equalsIgnoreCase(itemName)) {
                // Shift elements to the left to fill the gap
                for (int j = i; j < itemCount - 1; j++) {
                    menuItems[j] = menuItems[j + 1];
                }
                itemCount--;
                found = true;
                System.out.println("Item removed successfully.");
                break;
            }
        }
        if (!found) {
            System.out.println("Item not found in the menu.");
        }
    }
}

