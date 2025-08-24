// Problem 2: Multilevel Inheritance

// 👉 Create Person → Employee → Manager.

// Base class
class Person {
    void displayPerson() {
        System.out.println("I am a Person.");
    }
}

// Derived from Person
class Employee extends Person {
    void displayEmployee() {
        System.out.println("I am an Employee.");
    }
}

// Derived from Employee
class Manager extends Employee {
    void displayManager() {
        System.out.println("I am a Manager.");
    }
}

public class MultilevelInheritance {
    public static void main(String[] args) {
        Manager mgr = new Manager();
        mgr.displayPerson();   // Inherited from Person
        mgr.displayEmployee(); // Inherited from Employee
        mgr.displayManager();  // Manager's own method
    }
}
