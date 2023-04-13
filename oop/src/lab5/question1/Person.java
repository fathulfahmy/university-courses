package lab5.question1;

public class Person {
    private String name;

    public Person(String name) {
        this.name = name;
    }

    public Person() {
        name = "Unknown";
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}