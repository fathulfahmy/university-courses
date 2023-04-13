package lab2;

public class Question6 {
    public static void main(String[] args) {
        // total number of students in a class are 90
        int total;
        total = 90;

        // 50% of the total students secured grade 'A
        int gradeTotal, gradeBoys, gradeGirls;
        gradeTotal = (int) (0.5 * total);

        // 20 are boys
        gradeBoys = 20;

        // calculate the total number of girls getting grade 'A'
        gradeGirls = gradeTotal - gradeBoys;
        System.out.println("\nGirls scored grade A: " + gradeGirls);
    }
}
