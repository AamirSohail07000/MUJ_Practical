// Method Overloading – Area of Shapes

// Problem:
// Overload a method area() in a class Shape to find the area of a square, rectangle, and circle.

class Shape {
    int area(int side) {
        return side * side; // Square
    }

    int area(int length, int width) {
        return length * width; // Rectangle
    }

    double area(double radius) {
        return 3.14 * radius * radius; // Circle
    }

    public static void main(String[] args) {
        Shape s = new Shape();
        System.out.println("Area of Square: " + s.area(5));
        System.out.println("Area of Rectangle: " + s.area(4, 6));
        System.out.println("Area of Circle: " + s.area(3.5));
    }
}
