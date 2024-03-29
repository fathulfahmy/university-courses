package assignment;

import java.time.LocalDate;

public class Bike extends Vehicle {
    // Data member
    private double fee;
    private String parkingLevel;

    // Constructor
    public Bike() {
        super();
        fee = 30;
        parkingLevel = "B1";
    }

    public Bike(String ownerName, String ownerID, String manufacturer, String model, LocalDate expiryDate) {
        super(ownerName, ownerID, manufacturer, model, expiryDate);
        fee = 30;
        parkingLevel = "B1";
    }

    // Getter
    public double getFee() {
        return fee;
    }

    public String getParkingLevel() {
        return parkingLevel;
    }
}
