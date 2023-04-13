package assignment;

import java.time.LocalDate;

public class Car extends Vehicle {
    // Data member
    private double fee;
    private String parkingLevel;

    // Constructor
    public Car() {
        super();
        fee = 80;
        parkingLevel = "B3";
    }

    public Car(String ownerName, String ownerID, String manufacturer, String model, LocalDate expiryDate) {
        super(ownerName, ownerID, manufacturer, model, expiryDate);
        fee = 80;
        parkingLevel = "B3";
    }

    // Getter

    public double getFee() {
        return fee;
    }

    public String getParkingLevel() {
        return parkingLevel;
    }
}
