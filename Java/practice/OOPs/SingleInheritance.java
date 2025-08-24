// Problem 1: Single Inheritance

// 👉 Create a base class Animal and a subclass Dog that inherits from Animal

// Base class
class Animal {
    void eat() {
        System.out.println("Animals can eat.");
    }
}

// Derived class
class Dog extends Animal {
    void bark() {
        System.out.println("Dog barks.");
    }
}

// Main class
public class SingleInheritance {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();   // Inherited method
        dog.bark();  // Dog's own method
    }
}
