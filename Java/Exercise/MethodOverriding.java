// Write a Java program to create a class called Employee with methods called work() and
// getSalary(). Create a subclass called HRManager that overrides the work() method.

// Base class Employee
class Employee {
    private double salary;

    // Constructor
    public Employee(double salary) {
        this.salary = salary;
    }

    // Method to represent work of an employee
    public void work() {
        System.out.println("Employee is working...");
    }

    // Method to get salary
    public double getSalary() {
        return salary;
    }
}

// Subclass HRManager that extends Employee
class HRManager extends Employee {
    
    // Constructor that calls parent constructor
    public HRManager(double salary) {
        super(salary);
    }

    // Overriding the work() method
    @Override
    public void work() {
        System.out.println("HR Manager is managing recruitment and employee relations...");
    }
}

// Main class to test
public class MethodOverriding {
    public static void main(String[] args) {
        // Creating an Employee object
        Employee emp = new Employee(30000);
        emp.work();
        System.out.println("Employee Salary: " + emp.getSalary());

        System.out.println("---------------------------");

        // Creating an HRManager object
        HRManager hr = new HRManager(50000);
        hr.work(); // Overridden method will be called
        System.out.println("HR Manager Salary: " + hr.getSalary());
    }
}


// Employee is the base class with two methods: work() and getSalary().

// HRManager is a subclass that overrides the work() method to show specific behavior for HR work.

// Both classes use constructor chaining (super(salary)) so HRManager inherits the salary functionality from Employee.