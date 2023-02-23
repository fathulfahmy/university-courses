import java.util.*;

public class Program3 {
    public static void main(String[] args) {
        String firstName;
        String lastName;
        // firstName = JOptionPane.showInputDialog(null, "What is your first name?");
        // lastName = JOptionPane.showInputDialog(null, "What is your last name?");
        // JOptionPane.showMessageDialog(null, "Your full name is " + firstName + " " +
        // lastName)

        Scanner scanner = new Scanner(System.in);
        System.out.println("What is your first name?");
        firstName = scanner.next();
        System.out.println("What is your last name?");
        lastName = scanner.next();
        System.out.println("Your full name is " + firstName + " " + lastName);
        scanner.close();
    }

}
