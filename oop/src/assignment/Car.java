package assignment;

public class Car extends Vehicle {
    public double payrate;
    public int parkingNum;

    public Car() {
        payrate = 80;
        parkingNum = 0;
    }

    public int setParkingSpot(int parkingNum) {
        int nextparkingNum;
        this.parkingNum = parkingNum;
        nextparkingNum = parkingNum++;
        return nextparkingNum;
    }

    public int getParkingSpot() {
        return parkingNum;
    }
}
