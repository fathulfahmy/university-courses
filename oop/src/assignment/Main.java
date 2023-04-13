package assignment;

import java.time.LocalDate;
import java.util.Scanner;

public class Main {
    private static final int MAX_CAPACITY = 5;
    private static Vehicle[] vehicles = new Vehicle[MAX_CAPACITY];
    private static int vehicleCount = 0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;

        // Menu
        do {
            System.out.println("\nVehicle Registration System");
            System.out.println("1. Add record");
            System.out.println("2. View records");
            System.out.println("3. Edit record");
            System.out.println("4. Delete record");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    scanner.nextLine();
                    addRecord(scanner);
                    break;
                case 2:
                    viewRecords();
                    break;
                case 3:
                    scanner.nextLine();
                    editRecord(scanner);
                    break;
                case 4:
                    scanner.nextLine();
                    deleteRecord(scanner);
                    break;
                case 5:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        } while (choice != 5);
        scanner.close();
    }

    // Add record
    private static void addRecord(Scanner scanner) {
        if (vehicleCount >= MAX_CAPACITY) {
            System.out.println("\nSorry, the system is full. Cannot add more records.");
            return;
        }

        System.out.print("\nEnter owner name: ");
        String ownerName = scanner.nextLine();
        System.out.print("Enter owner ID: ");
        String ownerId = scanner.nextLine();
        System.out.print("Enter manufacturer name: ");
        String manufacturer = scanner.nextLine();
        System.out.print("Enter model name: ");
        String model = scanner.nextLine();
        System.out.print("Enter vehicle type (Bike, Car, Cargo): ");
        String vehicleType = scanner.nextLine();
        System.out.print("Enter expiry date (YYYY-MM-DD): ");
        String expiryDateStr = scanner.nextLine();
        LocalDate expiryDate = LocalDate.parse(expiryDateStr);

        Vehicle vehicle = null;
        switch (vehicleType.toLowerCase()) {
            case "bike":
                vehicle = new Bike(ownerName, ownerId, manufacturer, model, expiryDate);
                break;
            case "car":
                vehicle = new Car(ownerName, ownerId, manufacturer, model, expiryDate);
                break;
            case "cargo":
                vehicle = new Cargo(ownerName, ownerId, manufacturer, model, expiryDate);
                break;
            default:
                System.out.println("Invalid vehicle type!");
                return;
        }

        vehicles[vehicleCount++] = vehicle;
        System.out.println("Record added successfully!");
    }

    // View record
    private static void viewRecords() {
        System.out.println("\nVehicle Records:");
        for (int i = 0; i < vehicleCount; i++) {
            Vehicle vehicle = vehicles[i];
            System.out.println("\nRecord " + (i + 1));
            System.out.println("Owner: " + vehicle.getOwnerName());
            System.out.println("Owner ID: " + vehicle.getOwnerID());
            System.out.println("Manufacturer: " + vehicle.getManufacturer());
            System.out.println("Model: " + vehicle.getModel());
            System.out.println("Expiry Date: " + vehicle.getExpiryDate());
            if (vehicle instanceof Bike) {
                System.out.println("Parking Fee: " + ((Bike) vehicle).getFee());
                System.out.println("Parking Level: " + ((Bike) vehicle).getParkingLevel());

            }
            if (vehicle instanceof Car) {
                System.out.println("Parking Fee: " + ((Car) vehicle).getFee());
                System.out.println("Parking Level: " + ((Car) vehicle).getParkingLevel());

            }
            if (vehicle instanceof Cargo) {
                System.out.println("Parking Fee: RM" + ((Cargo) vehicle).getFee());
                System.out.println("Parking Level: " + ((Cargo) vehicle).getParkingLevel());

            }

        }
    }

    // Edit record
    private static void editRecord(Scanner scanner) {
        System.out.print("\nEnter the record number to edit: ");
        int recordNumber = scanner.nextInt();
        if (recordNumber < 1 || recordNumber > vehicleCount) {
            System.out.println("Invalid record number!");
            return;
        }

        scanner.nextLine();
        Vehicle vehicle = vehicles[recordNumber - 1];
        System.out.println("Editing record for: " + vehicle.getOwnerName());
        // Owner
        System.out.print("Enter new owner name: ");
        String newOwnerName = scanner.nextLine();
        vehicle.setOwnerName(newOwnerName);
        // Owner ID
        System.out.print("Enter new owner ID: ");
        String newOwnerId = scanner.nextLine();
        vehicle.setOwnerID(newOwnerId);
        // Manufacturer
        System.out.print("Enter new manufacturer name: ");
        String manufacturer = scanner.nextLine();
        vehicle.setManufacturer(manufacturer);
        // Model
        System.out.print("Enter new model name: ");
        String model = scanner.nextLine();
        vehicle.setModel(model);
        // Owner date
        System.out.print("Enter new expiry date (YYYY-MM-DD): ");
        String newExpiryDateStr = scanner.nextLine();
        LocalDate newExpiryDate = LocalDate.parse(newExpiryDateStr);
        vehicle.setExpiryDate(newExpiryDate);

        System.out.println("Record updated successfully!");
    }

    // Delete record
    private static void deleteRecord(Scanner scanner) {
        System.out.print("\nEnter the record number to delete: ");
        int recordNumber = scanner.nextInt();
        if (recordNumber < 1 || recordNumber > vehicleCount) {
            System.out.println("Invalid record number!");
            return;
        }

        for (int i = recordNumber - 1; i < vehicleCount - 1; i++) {
            vehicles[i] = vehicles[i + 1];
        }
        vehicleCount--;

        System.out.println("Record deleted successfully!");
    }
}
