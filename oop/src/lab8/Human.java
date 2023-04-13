package lab8;

public class Human extends Mammal {
    protected long nid;

    public Human(long s) {

        nid = s;
    }

    public long getNID() {
        return nid;
    }

    public String toString() {
        return "I am a human with " + hairColor + " hair color and NID " + nid;
    }
}