package pastyears.pyp2223;

import java.util.Scanner;

public class Division {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int[] a = { 3, 0, 7, 3, 8, 9 };

        boolean validInput = false;
        do {

            System.out.println("Insert an Integer number: ");
            String input = scanner.nextLine();

            try {

                int num = Integer.parseInt(input);
                System.out.println("The result is: " + num / a[num]);
                validInput = true;

            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Array Out Of Bounds");

            } catch (ArithmeticException e) {
                System.out.println("Division by zero");

            } catch (NumberFormatException e) {
                System.out.println("Invalid input");

            }
        } while (!validInput);

        System.out.println("End of the program");
        scanner.close();
    }
}
