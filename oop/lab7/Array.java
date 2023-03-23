import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        // reads 10 integers from user and store them in an array.
        Scanner sc = new Scanner(System.in);

        int num[] = new int[10];
        for (int i = 0; i < 10; i++) {
            System.out.println("Enter number " + (i + 1) + ":");
            num[i] = sc.nextInt();
        }

    }
}