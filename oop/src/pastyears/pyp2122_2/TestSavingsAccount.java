package pastyears.pyp2122_2;

public class TestSavingsAccount {
    public static void main(String[] args) {
        // intitate
        SavingsAccount saver1, saver2;
        saver1 = new SavingsAccount();
        saver2 = new SavingsAccount();

        saver1.setSavingsBalance(2000.0);
        saver2.setSavingsBalance(3000.0);

        // set annual interest to 0.04
        SavingsAccount.modifyInterestRate(0.04);

        // calculate monthly interest
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();

        // print new balance
        System.out.println("Balance saver 1: " + saver1.getSavingsBalance());
        System.out.println("Balance saver 2: " + saver2.getSavingsBalance());

        // set annual interest to 0.05
        SavingsAccount.modifyInterestRate(0.05);

        // calculate monthly interest
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();

        // print new balance
        System.out.println("Balance saver 1: " + saver1.getSavingsBalance());
        System.out.println("Balance saver 2: " + saver2.getSavingsBalance());
    }
}
