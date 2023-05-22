package pastyears.pyp2122_2;

public class EmployeeTest {
    public static void main(String[] args) {

        // create two Employee
        Employee e1, e2;
        e1 = new Employee("John", "Wick", 10000);
        e2 = new Employee("Mary", "Poppin", 20000);

        // assign yearly salary
        double e1YearlySalary = 12 * e1.getMonthly_salary();
        double e2YearlySalary = 12 * e2.getMonthly_salary();

        // display yearly salary for each
        System.out.println("\nFirst name: " + e1.getFirst_name());
        System.out.println("Last name: " + e1.getLast_name());
        System.out.println("Yearly Salary: " + e1YearlySalary);

        System.out.println("\nFirst name: " + e2.getFirst_name());
        System.out.println("Last name: " + e2.getLast_name());
        System.out.println("Yearly Salary: " + e2YearlySalary);

        // raise 0.10 yearly salary
        e1YearlySalary *= 1.10;
        e2YearlySalary *= 1.10;

        // display yearly salary for each
        System.out.println("\nFirst name: " + e1.getFirst_name());
        System.out.println("Last name: " + e1.getLast_name());
        System.out.println("Yearly Salary: " + e1YearlySalary);

        System.out.println("\nFirst name: " + e2.getFirst_name());
        System.out.println("Last name: " + e2.getLast_name());
        System.out.println("Yearly Salary: " + e2YearlySalary);

    }
}
