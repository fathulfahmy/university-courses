package pastyears.pypsem1_2021;

import java.util.Scanner;

class Pascal {
    private double a1, a2, f1, f2;

    public void setA1(double a1) {
        this.a1 = a1;
    }

    public void setA2(double a2) {
        this.a2 = a2;
    }

    public void setF1(double f1) {
        this.f1 = f1;
    }

    public void setF2(double f2) {
        this.f2 = f2;
    }

    public double getA1() {
        return a1;
    }

    public double getA2() {
        return a2;
    }

    public double getF1() {
        return f1;
    }

    public double getF2() {
        f2 = f1 * a2 / a1;
        return f2;
    }

}

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Pascal container = new Pascal();
        System.out.print("Enter A1: ");
        container.setA1(sc.nextDouble());
        System.out.print("Enter A2: ");
        container.setA2(sc.nextDouble());
        System.out.print("Enter F1: ");
        container.setF1(sc.nextDouble());
        System.out.println("\nF2 is: " + container.getF2() + " N");
        sc.close();
    }
}
