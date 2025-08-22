// Write a Java program that implements a multi-thread application that has three
// threads. First thread generates a random integer for every 1 second; second thread
// computes the square of the number and prints; third thread will print the value of cube
// of the number.


import java.util.Random;

//Thread 1: Generates random numbers every 1 second
class NumberGenerator extends Thread {
  int num; // shared number
  Random rand = new Random();
  private int count = 0;

  @Override
  public void run () {
    try {
      while (count < 10) {
        num = rand.nextInt(100); //Generate random number (0-99)
        System.out.println("\nGenerated Number : " + num);

        //Start Square and Cube Threads for this number
        new Square(num).start();
        new Cube(num).start();

        count++;
        Thread.sleep(1000); // wait for 1 second
      }
      System.out.println("\nProgram finished. Exiting.....");
    } catch (InterruptedException e) {
        System.out.println("Generator interrupted");

    }
  }
}

// Thread 2 : Computes the square of the number
class Square extends Thread{
  int number;

  Square(int num) {
    this.number = num;
  }

  public void run() {
    int sq = number * number;
    System.out.println("Square of "+ number + " = " + sq);
  }
}

//Thread 3 : Computes the cube of the number

class Cube extends Thread {
  int number;

  Cube(int num) {
    this.number = num;
  }

  public void run() {
    int Cube = number * number * number ;
    System.out.println("Cube of " + number + " = " + Cube);
  }
}

// Main Class
public class MultiThreading {
  public static void main(String[] args) {
    // Start the generator thread
    NumberGenerator t1= new NumberGenerator();
    t1.start();
  }
}