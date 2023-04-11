package sample1;

public class Mammal {
    protected String hairColor;

    public Mammal() {
        hairColor = "unknown";
    }

    public Mammal(String hc) {
        hairColor = hc;
    }

    public String getHairColor() {
        return hairColor;
    }

    public String toString() {
        return "I am a mammal with " + hairColor + " hair color.";
    }
}