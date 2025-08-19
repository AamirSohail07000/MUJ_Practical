// Bank Account
// Problem:
// Write a BankAccount class with two constructors:
// One takes only accountNumber (balance should be set to 0).
// Another takes both accountNumber and balance.
// Display the account details.

//(Constructor overloading concept)


public class BankAccount {
  private String accountNumber;
  private double balance;

  // Constructor 1 : Sets balance to 0
  public BankAccount(String accountNumber) {
    this.accountNumber = accountNumber;
    this.balance= 0.0;
  }

  // COnstructor 2: Takes both accountNumber and balance
  public BankAccount(String accountNumber, double balance) {
    this.accountNumber = accountNumber;
    this.balance = balance;
  }

  // method to display account details
  public void displayDetails() {
    System.out.println("Account Number: " + accountNumber);
    System.out.println("Balance: " + balance);
  }

  public static void main(String[] args){
    //Test the constructors
    BankAccount account1 = new BankAccount("12345");
    BankAccount account2 = new BankAccount("6789", 2500.0);

    account1.displayDetails();
    account2.displayDetails();
  }

}

// Note: BankAccount can be stored as int or string based on scenarios like:
// Use String if account numbers:
// Have leading zeros.
// Might include non-numeric characters.
// Are used as identifiers (no math needed).

// Use Integer/long if account numbers:
// Are purely numeric.
// Require arithmetic checks (e.g., validation).