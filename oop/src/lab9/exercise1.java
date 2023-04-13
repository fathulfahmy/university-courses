package lab9;

import java.util.*;

public class exercise1 {
    static Scanner scan = new Scanner(System.in);

    public static void arithmeticMethod() {
        System.out.print("Please enter an integer as divisor: ");
        int number = scan.nextInt();
        int number2 = 10;
        number2 /= number;
        System.out.println("Total is " + number2);
    }

    public static void argumentMethod(int number) throws IllegalArgumentException {
        if (number > 1)
            System.out.println("The number entered is " + number);
        else
            throw new IllegalArgumentException("Incorrect argument: number is less than 1");
    }

    public static void main(String[] args) {
        try {
            // Input mismatch
            System.out.print("Please enter an integer: ");
            int number = scan.nextInt();
            System.out.println("The number entered is " + number);
            // Arithmetic expection
            arithmeticMethod();
            // Illegal argument
            int num;
            System.out.print("Please enter an integer for argument: ");
            num = scan.nextInt();
            argumentMethod(num);
        } catch (InputMismatchException e) {
            System.out.println("Incorrect input: an integer is required");
        } catch (ArithmeticException e) {
            System.out.println("Incorrect input: divisor cannot be zero");
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
        System.out.println("Execution continues....");
    }
}
