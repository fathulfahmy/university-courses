package assignment;

import java.time.LocalDate;

public class Vehicle {
    private String ownerName;
    private String ownerID;
    private String manufacturer;
    private String model;
    private LocalDate expirydate;

    public Vehicle() {
        ownerName = "Unassigned";
        ownerID = "Unassigned";
        manufacturer = "Unassigned";
        model = "Unassigned";
        expirydate = LocalDate.now();
    }

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

    public void setExpirydate(LocalDate expirydate) {
        this.expirydate = expirydate;
    }

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

    public LocalDate getExpirydate() {
        return expirydate;
    }
}
