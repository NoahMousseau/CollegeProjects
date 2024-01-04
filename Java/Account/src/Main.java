
class Account {
    private int id;
    private double balance;
    public Account(int newId, double newBalance) {
        id = newId;
        balance = newBalance;
    }
    public int getId() {
        return this.id;
    }
    public double getBalance() {
        return balance;
    }
    public void setId(int newId) {
        id = newId;
    }
    public void setBalance(double newBalance) {
        balance = newBalance;
    }
    public void withdraw(double amount) {
        balance -= amount;
    }
    public void deposit(double amount) {
        balance += amount;
    }
    @Override
    public String toString() {
        return "Account id: "+ id +"\nAccount balance: "+ balance;
    }
}

class CheckingAccount extends Account {
    private int fee;
    public CheckingAccount(int newId, int newBalance, int newFee) {
        super(newId, newBalance);
        fee = newFee;
    }
    public int getFee() { return fee; }
    public void setFee(int tempFee) { fee = tempFee; }
    public @Override String toString() {
        System.out.println("Checking Account");
        System.out.println("Monthly Fee: " + getFee());
        System.out.println("Account id: " + getId());
        System.out.println("Account balance: " + super.getBalance());
        return "";
    }
}
class SavingsAccount extends Account {
    private double interestRate;
    public double getInterestRate() { return interestRate; }
    public void setInterestRate(double tempInterestRate) { interestRate = tempInterestRate; }
    public SavingsAccount(int newId, int newBalance, double newInterestRate) {
        super(newId, newBalance);
        interestRate = newInterestRate;
    }
    public @Override String toString() {
        System.out.println("Savings Account");
        System.out.println("Interest Rate: " + getInterestRate());
        System.out.println("Account id: " + getId());
        System.out.println("Account balance: " + super.getBalance());
        return "";
    }
}

class Main {
    public static void main(String[] args) {
        //Creating checking class
        CheckingAccount checking = new CheckingAccount(1, 25, 25);
        //Creating savings class
        SavingsAccount savings = new SavingsAccount(2, 35, 0.05);
        savings.setBalance(35);
        savings.setId(2);
        savings.setInterestRate(0.05);
        //Testing methods
        System.out.println("Account info before withdrawing $10");
        checking.toString();
        System.out.println("");
        savings.toString();
        System.out.println("");
        System.out.println("Account info after withdrawing $10");
        checking.withdraw(10.0);
        savings.withdraw(10.0);
        checking.toString();
        System.out.println("");
        savings.toString();
    }
}