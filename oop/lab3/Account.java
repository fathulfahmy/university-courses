package oop.lab3;

import java.util.*;

public class Account {
    private double balance;

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
            System.out.println("Insufficient amount");
        else
            balance -= amount;
    }
}
