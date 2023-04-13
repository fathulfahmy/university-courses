package lab1;

/*************************************************************
SUBJECT: CSEB3313/ OBJECT ORIENTED PROGRAMMING
DATE: 02/02/2023
DESCRIPTION: 
NAME: Muhammad Fathul Fahmy B Mohd Nizam
STUDENTID: SW01081798
QUESTION: 
*************************************************************/

/**
 * The MyFirstJavaProgram class implements an application that
 * simply prints "Hello World!" to standard output.
 */

public class MyFirstJavaProgram {

    public static void main(String[] args) {

        System.out.println("My first Java program!");

        javax.swing.JFrame window;

        window = new javax.swing.JFrame();
        window.setSize(1920, 1080);
        window.setTitle("My First Java Program in Lab");

        java.awt.Point position;

        position = new java.awt.Point(0, 0);
        window.setLocation(position);
        window.setVisible(true);

    }
}
