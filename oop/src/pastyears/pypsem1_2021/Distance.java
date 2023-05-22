// package pastyears.pypsem1_2021;

// import java.util.Scanner;

// class Distance {
// // d=vi×t+0.5×a× t pow2
// private double d, v, t, a;

// public void setA(double a) {
// this.a = a;
// }

// public void setD(double d) {
// this.d = d;
// }

// public void setT(double t) {
// this.t = t;
// }

// public void setV(double v) {
// this.v = v;
// }

// public double getA() {
// return a;
// }

// public double getD() {
// d = v * t + 0.5 * a * Math.pow(t, 2);
// return d;
// }

// public double getT() {
// return t;
// }

// public double getV() {
// return v;
// }

// }

// class Main {
// public static void main(String[] args) {

// Distance plane = new Distance();
// // v=0
// plane.setV(0);
// // t= pow(5,4)
// plane.setT(Math.pow(5, 4));

// // input a
// Scanner sc = new Scanner(System.in);
// System.out.print("\nEnter acceleration in ms: ");
// plane.setA(sc.nextDouble());

// // display d
// System.out.println("Distance: " + plane.getD());
// sc.close();
// }
// }