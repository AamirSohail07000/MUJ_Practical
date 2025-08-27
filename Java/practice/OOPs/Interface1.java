// Create an interface Shape with methods area() and perimeter(). Implement it in a class Circle.

// Interface
interface Shape {
    double area();
    double perimeter();
}

// Implementation in Circle
class Circle implements Shape {
    double radius;

    Circle(double r) {
        this.radius = r;
    }

    public double area() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }
}

// Main
public class Interface1 {
    public static void main(String[] args) {
        Circle c = new Circle(5);
        System.out.println("Area: " + c.area());
        System.out.println("Perimeter: " + c.perimeter());
    }
}
