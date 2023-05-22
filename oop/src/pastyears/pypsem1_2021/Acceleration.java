// package pastyears.pypsem1_2021;

// import java.util.Scanner;

// class Acceleration {
// private double u, v, t, a;

// // input u
// public void setU(double u) {
// this.u = u * 1000 / (60 * 60);
// }

// // input v
// public void setV(double v) {
// this.v = v * 1000 / (60 * 60);
// }

// // input t
// public void setT(double t) {
// this.t = t;
// }

// // display converted u
// public double getU() {
// return u;
// }

// // display converted v
// public double getV() {
// return v;
// }

// // display converted a
// public double getA() {
// a = (v - u) / t;
// return a;
// }
// }

// class Main {
// public static void main(String[] args) {
// Scanner sc = new Scanner(System.in);
// Acceleration bus = new Acceleration();
// System.out.print("\nEnter initial speed in kmh: ");
// bus.setU(sc.nextDouble());

// System.out.print("\nEnter final speed in kmh: ");
// bus.setV(sc.nextDouble());

// System.out.print("\nEnter time to decrease speed");
// bus.setT(sc.nextDouble());

// System.out.println("The initial speed in ms: " + bus.getU());
// System.out.println("The final speed in ms: " + bus.getV());
// System.out.println("Acceleraton: " + Math.abs(bus.getA()));
// sc.close();
// }
// }
