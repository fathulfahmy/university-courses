public class Dog extends Mammal {
    
    protected int tagNumber;
    
    public Dog (int tn) {
       super("sss");
        tagNumber = tn;
        if (hairColor.equals("unknown"))
            hairColor = "brown";
    }
    
    public int getTagNumber() {
        return tagNumber;
    }
    public String toString() {
        return "I am a dog with " + hairColor + " hair color and tag number " + 
                tagNumber;
    }
}