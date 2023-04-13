package lab3;

public class Account {
    private double balance;
    private final double minAmount = 20.0;

    public void initBalance(double initBalance) {
        if (balance < initBalance)
            balance = initBalance;
        else
            balance = 0.0;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        if (balance < amount)
            System.out.println("Insufficient balance");
        if ((balance - amount) < minAmount)
            System.out.println("Withdrawal exceed minimum amount");
        else
            balance -= amount;
    }
}
