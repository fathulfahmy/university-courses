package finalexam;

import java.util.*;

class TestCompetition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // create object using user input
        String competition_name;
        String winning_team;
        System.out.print("Enter competition name: ");
        competition_name = sc.nextLine();
        System.out.print("Enter winning team name: ");
        winning_team = sc.nextLine();
        int year = 0;
        boolean done = false;
        while (!done) {
            try {
                System.out.print("Enter competition year: ");
                int inputYear = sc.nextInt();
                year = inputYear;
                done = true;
            } catch (InputMismatchException e) {
                // throw InputMismatchException if non-numerical value
                // display appropriate message
                sc.nextLine();
                System.out.println("\nInvalid input. Type must be integer.");
            } catch (Exception e) {
                System.out.println("\nInvalid input.");
            }
        }
        sc.close();
        // Re-enter value
        Competition competition = new Competition(competition_name, winning_team, year);

        // Check current year
        if (competition.isCurrent())
            System.out.println("\nThe competition was held in the current year");
        else
            System.out.println("\nThe competition was not held in the current year");

        // Display information toString
        System.out.println(competition.toString());

    }
}