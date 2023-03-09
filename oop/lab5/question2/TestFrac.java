package question1;

public class TestFrac {
    public static void main(String[] args) {
        Fraction f1 = new Fraction(1, 2);
        Fraction f2 = new Fraction(2, 5);
        f1.add(f2);
        System.out.println(f1);
    }
}