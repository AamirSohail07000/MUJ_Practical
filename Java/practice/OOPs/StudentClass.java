// Student.java
// A simple class representing a student with fields and methods

public class StudentClass {
    // Fields / Attributes
    private String name;
    private int rollNumber;
    private char grade;

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setRollNumber(int rollNumber) {
        this.rollNumber = rollNumber;
    }

    public void setGrade(char grade) {
        this.grade = grade;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getRollNumber() {
        return rollNumber;
    }

    public char getGrade() {
        return grade;
    }

    // Method to display student details
    public void displayInfo() {
        System.out.println("Student Details:");
        System.out.println("Name       : " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Grade      : " + grade);
    }

    // Main method to test Student class
    public static void main(String[] args) {
        StudentClass s = new StudentClass();
        s.setName("Aamir");
        s.setRollNumber(101);
        s.setGrade('A');
        s.displayInfo();
    }
}
