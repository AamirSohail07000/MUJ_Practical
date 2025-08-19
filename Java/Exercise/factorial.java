// Write a program to calculate the factorial of a given number.

import java.util.Scanner;
public class factorial{
  public static void main (String[] args) {
    Scanner sc = new Scanner(System.in);
    int number = sc.nextInt();

    int i = 1;
    long factorial = 1;

    if (number < 0) {
      System.out.println("Undefined");
    }

    else {
      while (i <= number) {
        while (i <= number) {
          factorial *= i;
          i++;
        }
          System.out.println(factorial);
      }
    }
  }
}