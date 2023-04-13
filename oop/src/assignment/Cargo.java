package assignment;

import java.time.LocalDate;

public class Cargo extends Vehicle {
    // Data member
    private double fee;
    private String parkingLevel;

    // Constructor
    public Cargo() {
        super();
        fee = 0;
        parkingLevel = "B1 (Loading Bay)";
    }

    public Cargo(String ownerName, String ownerID, String manufacturer, String model, LocalDate expiryDate) {
        super(ownerName, ownerID, manufacturer, model, expiryDate);
        fee = 0;
        parkingLevel = "B1 (Loading Bay)";
    }

    // Getter
    public double getFee() {
        return fee;
    }

    public String getParkingLevel() {
        return parkingLevel;
    }
}
