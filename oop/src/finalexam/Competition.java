package finalexam;

import java.util.*;

public class Competition {
    // data member
    String competition_name;
    String winning_team;
    int year;

    // constructor
    public Competition() {
        competition_name = "not set";
        winning_team = "not set";
        year = 0;
    }

    public Competition(String competition_name, String winning_team, int year) {
        this.competition_name = competition_name;
        this.winning_team = winning_team;
        this.year = year;
    }

    public String toString() {
        return "\nCompetition name: " + this.competition_name + "\nWinning Team: " + this.winning_team
                + "\nCompetition year: " + this.year;
    }

    public boolean isCurrent() {
        if (this.year == 2023) {
            return true;
        } else {
            return false;
        }
    }
    // methods
}