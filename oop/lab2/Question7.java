package OOP.lab2;

import java.util.*;

public class Question7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // input number
        int num;
        System.out.print("\nEnter 4 digit number: ");
        num = scanner.nextInt();

        // num / 1000
        // num = num % 1000

        // FIRST DIGIT
        int digit1, digit2, digit3, digit4;
        // extract thousand
        digit1 = num / 1000;
        // plus 2
        digit1 += 2;
        if (digit1 >= 10)
            digit1 -= 10;

        // SECOND DIGIT
        // remove thousand
        num %= 1000;
        // extract hundred
        digit2 = num / 100;
        // plus 2
        digit2 += 2;
        if (digit2 >= 10)
            digit2 -= 10;

        // THIRD DIGIT
        // remove hundred
        num %= 100;
        // extract tenth
        digit3 = num / 10;
        // plus 2
        digit3 += 2;
        if (digit3 >= 10)
            digit3 -= 10;

        // FOURTH DIGIT
        // remove tenth
        num %= 10;
        // extract one
        digit4 = num;
        // plus 2
        digit4 += 2;
        if (digit4 >= 10)
            digit4 -= 10;

        System.out.println("Output: " + digit1 + digit2 + digit3 + digit4);

    }
}
