public class SalaryManagementSystem {
    private double salary;

    public void enterSalary(double salary) {
        this.salary = salary;
    }

    public double calculateBonus() {
        if (salary < 50000) {
            return 0.05 * salary;
        } else {
            return 0.1 * salary;
        }
    }

    public double getSalary() {
        return salary;
    }
}
