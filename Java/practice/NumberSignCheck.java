// Check Whether a Number is Positive, Negative, or Zero

import java.util.Scanner;

public class NumberSignCheck{
  public static void main(String[]args){
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter a number: ");
    int number = sc.nextInt();

    if (number > 0)
        System.out.println("The number is positive.");
    else if (number < 0)
        System.out.println("The number is Negative.");
    else
        System.out.println("The number is Zero.");

    sc.close();            
  }
}