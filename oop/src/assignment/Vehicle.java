package assignment;

import java.time.LocalDate;

public class Vehicle {
    // Data member
    private String ownerName;
    private String ownerID;
    private String manufacturer;
    private String model;
    private LocalDate expirydate;

    // Constructor
    public Vehicle() {
        ownerName = "Unassigned";
        ownerID = "Unassigned";
        manufacturer = "Unassigned";
        model = "Unassigned";
        expirydate = LocalDate.now();
    }

    public Vehicle(String ownerName, String ownerID, String manufacturer, String model, LocalDate expirydate) {
        setOwnerName(ownerName);
        setOwnerID(ownerID);
        setManufacturer(manufacturer);
        setModel(model);
        setExpiryDate(expirydate);
    }

    // Setter
    public void setOwnerName(String ownerName) {
        this.ownerName = ownerName;
    }

    public void setOwnerID(String ownerID) {
        this.ownerID = ownerID;
    }

    public void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setExpiryDate(LocalDate expirydate) {
        this.expirydate = expirydate;
    }

    // Getter
    public String getOwnerName() {
        return ownerName;
    }

    public String getOwnerID() {
        return ownerID;
    }

    public String getManufacturer() {
        return manufacturer;
    }

    public String getModel() {
        return model;
    }

    public LocalDate getExpiryDate() {
        return expirydate;
    }

}
