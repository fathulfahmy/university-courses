package oop.lab3;

public class TestAccount {
    public static void main(String[] args) {
        Account acct1 = new Account();

        acct1.initBalance(100.0);
        acct1.deposit(50.0);
        acct1.withdraw(140.0);
        acct1.getBalance();
    }

}
