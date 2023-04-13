package lab5.question1;

public class Vehicle {
    private Person owner = new Person();

    public void setOwner(Person owner) {
        this.owner = owner;
    }

    public Person getOwner() {
        return this.owner;
    }
}