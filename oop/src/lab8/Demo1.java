package lab8;

public class Demo1 {

    public static void main(String[] args) {

        Human h = new Human(123456789);
        System.out.println("Human h's  hair color: " + h.getHairColor());
        System.out.println(h.toString());

        Dog d = new Dog(201);
        System.out.println("Dog d's  hair color: " + d.getHairColor());
        System.out.println(d.toString());

    }

}
