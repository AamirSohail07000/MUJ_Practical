// Write a Java program to create a class called Shape with a method called getArea().
// Create a subclass called Rectangle that overrides the getArea() method to calculate the
// area of a rectangle.

// Base class Shape
class Shape {
    // Method to calculate area (default, no formula here)
    // Subclasses will override this method
    public double getArea() {
        return 0; // Default value
    }
}

// Subclass Rectangle that inherits Shape
class Rectangle extends Shape {
    private double length;
    private double width;

    // Constructor to initialize length and width of rectangle
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Overriding getArea() method to calculate area of rectangle
    @Override
    public double getArea() {
        return length * width;
    }
}

// Main class
public class MethodOverriding2 {
    public static void main(String[] args) {
        // Create a Rectangle object
        Rectangle rect = new Rectangle(10, 5);

        // Call overridden getArea() method
        System.out.println("Area of Rectangle: " + rect.getArea());
    }
}
