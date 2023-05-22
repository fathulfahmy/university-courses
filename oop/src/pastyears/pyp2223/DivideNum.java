package pastyears.pyp2223;

import java.util.Scanner;

public class DivideNum {
    private double num;

    public double getNum() {
        return num;
    }

    public void setNum(double num) {
        this.num = num;
    }

    public void divideNum(int divisor) {
        this.num /= divisor;
    }

    public void setNumerator() {
        Scanner sc = new Scanner(System.in);
        Double input;

        while (true) {
            try {
                System.out.println("Enter an integer as numerator: ");
                input = sc.nextDouble();
                if (input >= 0 || input <= 0) {
                    this.num = input;
                    break;
                }
            } catch (Exception e) {
                System.out.println("Invalid input");
            }
        }
        sc.close();
    }
}
