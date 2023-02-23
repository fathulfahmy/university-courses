import java.util.*;

public class Question5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // accept a person weight
        double calories, bodyweight;
        System.out.print("\nEnter bodyweight(pound): ");
        bodyweight = scanner.nextDouble();
        // display number of calories the person need in one day
        // calories = bodyweight * 19
        calories = bodyweight * 19;
        System.out.println("Calories needed: " + calories);
        scanner.close();
    }
}
