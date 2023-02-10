package OOP.lab2;

import java.util.*;

public class Question4 {
    public static void main(String[] args) {
        // formula: Fahrenheit = 9/5 * Celsius + 32
        // input temperature in degree celcius
        Scanner scanner = new Scanner(System.in);
        double celcius, fahrenheit;

        System.out.print("\nEnter temperature(celcius): ");
        celcius = scanner.nextDouble();

        // prints out temperature in degrees fahrenheit
        fahrenheit = (double) 9 / 5 * celcius + 32;
        System.out.println(celcius + " celcius is " + fahrenheit + " fahrenheit");
    }

}
