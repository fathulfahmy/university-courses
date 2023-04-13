package lab3_cuboid;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Cuboid cuboid1 = new Cuboid();
        // Set data cuboid 1
        System.out.println("\nEnter data for Cuboid 1");
        System.out.print("Enter length: ");
        cuboid1.setLength(scanner.nextDouble());

        System.out.print("Enter Height: ");
        cuboid1.setHeight(scanner.nextDouble());

        System.out.print("Enter Width: ");
        cuboid1.setWidth(scanner.nextDouble());

        // Set cuboid 2 using setter
        Cuboid cuboid2 = new Cuboid();
        System.out.println("\nEnter data for Cuboid 2");
        System.out.print("Enter length: ");
        double length = scanner.nextDouble();
        cuboid2.setLength(length);

        System.out.print("Enter Height: ");
        double height = scanner.nextDouble();
        cuboid2.setHeight(height);

        System.out.print("Enter Width: ");
        double width = scanner.nextDouble();
        cuboid2.setWidth(width);

        // Display information
        System.out.println("\nCuboid 1");
        System.out.println("Length: " + cuboid1.getLength());
        System.out.println("Height: " + cuboid1.getHeight());
        System.out.println("Width: " + cuboid1.getWidth());
        System.out.println("Perimeter: " + cuboid1.perimeter());
        System.out.println("Area: " + cuboid1.area());
        System.out.println("Volume: " + cuboid1.volume());

        System.out.println("\nCuboid 2");
        System.out.println("Length: " + cuboid2.getLength());
        System.out.println("Height: " + cuboid2.getHeight());
        System.out.println("Width: " + cuboid2.getWidth());
        System.out.println("Perimeter: " + cuboid2.perimeter());
        System.out.println("Area: " + cuboid2.area());
        System.out.println("Volume: " + cuboid2.volume());

        // Compare volume
        if (cuboid1.volume() > cuboid2.volume())
            System.out.println("\nCuboid 1 is bigger than Cuboid 2");
        else
            System.out.println("\nCuboid 2 is bigger than Cuboid 1");
        scanner.close();

    }

}