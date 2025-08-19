// Rectangle Area

// Problem:
// Write a Rectangle class with overloaded constructors:

// One constructor initializes length and width to 0.

// Another takes one parameter (square).

// Another takes two parameters (length and width).

public class Rectangle{
  int length, width;

  // Constructor to initialize Length and width to 0
  Rectangle(){
    length = 0;
    width = 0;
  }

  // Constructor with one parameter (Square)
  Rectangle(int side) {
    length = side;
    width = side;
  }

  // Constructor with two parameter Length and breadth
  Rectangle( int l, int w){
    length = l;
    width = w;
  }

  int area(){
    return length * width;
  }

  public static void main(String[] args) {
    Rectangle r1 = new Rectangle();
    Rectangle r2 = new Rectangle(5);
    Rectangle r3 = new Rectangle(4, 6);

    System.out.println("Area of r1: " + r1.area());
    System.out.println("Area of r1: " + r2.area());
    System.out.println("Area of r1: " + r3.area());

  }

}