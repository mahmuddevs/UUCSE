import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        SalaryManagementSystem salarySystem = new SalaryManagementSystem();
        int choice;

        do {
            System.out.println("Salary Management System");
            System.out.println("1. Enter Salary");
            System.out.println("2. Calculate Bonus");
            System.out.println("3. Display Salary");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter the salary: ");
                    double salary = scanner.nextDouble();
                    salarySystem.enterSalary(salary);
                    break;
                case 2:
                    double currentSalary = salarySystem.getSalary();
                    if (currentSalary == 0) {
                        System.out.println("Please enter the salary first.");
                    } else {
                        double bonus = salarySystem.calculateBonus();
                        System.out.println("Bonus: $" + bonus);
                    }
                    break;
                case 3:
                    double displayedSalary = salarySystem.getSalary();
                    if (displayedSalary == 0) {
                        System.out.println("Salary is not entered yet.");
                    } else {
                        System.out.println("Salary: $" + displayedSalary);
                    }
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 4);

        scanner.close();
    }
}
