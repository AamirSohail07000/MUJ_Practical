
// Method Overriding – Bank Interest Rates

// Problem:
// Create a base class Bank with method getRateOfInterest(). Override it in SBI, ICICI, and HDFC classes.

class Bank {
    double getRateOfInterest() {
        return 0.0;
    }
}

class SBI extends Bank {
    @Override
    double getRateOfInterest() {
        return 6.5;
    }
}

class ICICI extends Bank {
    @Override
    double getRateOfInterest() {
        return 7.0;
    }
}

class HDFC extends Bank {
    @Override
    double getRateOfInterest() {
        return 7.5;
    }
}

public class MethodOverriding2 {
    public static void main(String[] args) {
        Bank b1 = new SBI();
        Bank b2 = new ICICI();
        Bank b3 = new HDFC();

        System.out.println("SBI Interest Rate: " + b1.getRateOfInterest() + "%");
        System.out.println("ICICI Interest Rate: " + b2.getRateOfInterest() + "%");
        System.out.println("HDFC Interest Rate: " + b3.getRateOfInterest() + "%");
    }
}
