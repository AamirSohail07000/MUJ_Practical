
// Combination – Overloading + Overriding (Employee Salary Example)

// Problem:

// Create a class Employee with method salary().

// Override it in Manager and Developer.

// Also overload salary() in Manager to accept a bonus.

class Employee {
    double salary() {
        return 30000;
    }
}

class Manager extends Employee {
    @Override
    double salary() {
        return 50000;
    }

    double salary(double bonus) {
        return 50000 + bonus;
    }
}

class Developer extends Employee {
    @Override
    double salary() {
        return 40000;
    }
}

public class OverloadingOverriding {
    public static void main(String[] args) {
        Employee e1 = new Manager();
        Employee e2 = new Developer();

        System.out.println("Manager Salary: " + e1.salary());
        System.out.println("Manager Salary with Bonus: " + ((Manager)e1).salary(10000));
        System.out.println("Developer Salary: " + e2.salary());
    }
}
