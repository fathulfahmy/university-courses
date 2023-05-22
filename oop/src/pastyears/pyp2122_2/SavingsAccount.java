package pastyears.pyp2122_2;

public class SavingsAccount {
    public static double annualInterestRate;
    private double savingsBalance;

    public void setSavingsBalance(double savingsBalance) {
        this.savingsBalance = savingsBalance;
    }

    public double getSavingsBalance() {
        return savingsBalance;
    }

    // calculate monthly interest (savingsBalance * annualInterest Rate / 12)
    public void calculateMonthlyInterest() {
        double monthly_interest = savingsBalance * annualInterestRate / 12;
        this.savingsBalance += monthly_interest;
    }
    // add interest to savings balance - main

    // static modifyInterestRate set annualInterestRate to new value
    public static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }
}
