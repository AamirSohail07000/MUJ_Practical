// Problem 3: Hierarchical Inheritance

// 👉 One base class Shape with two subclasses Circle and Rectangle.

// Base class
class Shape {
    void display() {
        System.out.println("This is a Shape.");
    }
}

// Subclass 1
class Circle extends Shape {
    void area(int radius) {
        System.out.println("Area of Circle: " + (3.14 * radius * radius));
    }
}

// Subclass 2
class Rectangle extends Shape {
    void area(int length, int breadth) {
        System.out.println("Area of Rectangle: " + (length * breadth));
    }
}

public class HierarchicalInheritance {
    public static void main(String[] args) {
        Circle circle = new Circle();
        circle.display();
        circle.area(5);

        Rectangle rectangle = new Rectangle();
        rectangle.display();
        rectangle.area(4, 6);
    }
}
