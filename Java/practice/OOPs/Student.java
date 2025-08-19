// Student Information
// Problem:
// Write a Student class with overloaded constructors:
// One takes only name.
// Another takes name and age.
// Another takes name, age, and course.

class Student {
  String name;
  int age;
  String course;

  // Constructor with only name
  Student (String n) {
    name = n;
    age = 0;
    course = "Not Assigned";

  }

  // Constructor with name and age
  Student (String n, int a) {
    name = n;
    age = a;
    course = "Not assigned";
  }
  // Constructor with name, age and course
  Student (String n, int a, String c) {
    name = n;
    age = a;
    course = c;
  }

  void display() {
    System.out.println("Name: " + name + ", Age: " + age + ", Course: " + course );

  }

  public static void main (String[] args){
    Student s1 = new Student("Rahman");
    Student s2 = new Student("Azeem", 22);
    Student s3 = new Student("Shakir", 24, "MCA");

    s1.display();
    s2.display();
    s3.display();
  }

}