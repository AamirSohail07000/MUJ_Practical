// Create an interface Bank with method rateOfInterest(). Implement it in classes SBI and HDFC.

// Interface
interface Bank {
    double rateOfInterest();
}

// SBI implements Bank
class SBI implements Bank {
    public double rateOfInterest() {
        return 6.5;
    }
}

// HDFC implements Bank
class HDFC implements Bank {
    public double rateOfInterest() {
        return 7.2;
    }
}

// Main
public class Interface3 {
    public static void main(String[] args) {
        Bank b1 = new SBI();
        Bank b2 = new HDFC();

        System.out.println("SBI ROI: " + b1.rateOfInterest() + "%");
        System.out.println("HDFC ROI: " + b2.rateOfInterest() + "%");
    }
}
