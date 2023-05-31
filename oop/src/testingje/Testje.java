package testingje;

final class Complex {
    private final double re = 3.0, im = 0.0;

    public Complex(double re, double im) {
        this.re = re;
        this.im = im;
    }

    public String toString() {
        return re + " + " + im + "i";
    }
}

public class Testje {

    public static void main(String[] args) {
        Complex c = new Complex(10, 15.0);
        System.out.println("Complex number is " + c);
    }
}
