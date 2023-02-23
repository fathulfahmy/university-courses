import java.util.*;

public class Question4 {
    public static void main(String[] args) {
        // formula: Fahrenheit = 9/5 * Celsius + 32
        // input temperature in degree celsius
        Scanner scanner = new Scanner(System.in);
        double celsius, fahrenheit;

        System.out.print("\nEnter temperature(celsius): ");
        celsius = scanner.nextDouble();

        // prints out temperature in degrees fahrenheit
        fahrenheit = (double) 9 / 5 * celsius + 32;
        System.out.println(celsius + " celsius is " + fahrenheit + " fahrenheit");
        scanner.close();
    }

}
