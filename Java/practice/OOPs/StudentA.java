// Java program that shows both constructor overloading and method overloading together

class StudentA {
    String name;
    int age;
    String course;

    // -------- Constructor Overloading --------
    
    // Constructor with no parameter
    StudentA() {
        name = "Unknown";
        age = 0;
        course = "Not Assigned";
    }

    // Constructor with 1 parameter
    StudentA(String n) {
        name = n;
        age = 0;
        course = "Not Assigned";
    }

    // Constructor with 2 parameters
    StudentA(String n, int a) {
        name = n;
        age = a;
        course = "Not Assigned";
    }

    // Constructor with 3 parameters
    StudentA(String n, int a, String c) {
        name = n;
        age = a;
        course = c;
    }

    // -------- Method Overloading --------

    // Display method with no parameter
    void display() {
        System.out.println("Name: " + name + ", Age: " + age + ", Course: " + course);
    }

    // Display method with 1 parameter
    void display(String prefix) {
        System.out.println(prefix + " " + name + ", Age: " + age + ", Course: " + course);
    }

    // Display method with 2 parameters
    void display(String prefix, String suffix) {
        System.out.println(prefix + " " + name + " " + suffix + " | Age: " + age + ", Course: " + course);
    }

    // -------- Main method --------
    public static void main(String[] args) {
        // Constructor Overloading in action
        StudentA s1 = new StudentA();
        StudentA s2 = new StudentA("Rahul");
        StudentA s3 = new StudentA("Sneha", 22);
        StudentA s4 = new StudentA("Amit", 23, "MCA");

        // Method Overloading in action
        s1.display();
        s2.display("Student:");
        s3.display("Details of", "are shown below");
        s4.display();
    }
}
