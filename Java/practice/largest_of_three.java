import java.util.Scanner;

public class largest_of_three{
  public static void main (String[]args){

    Scanner sc = new Scanner(System.in);

    // Input three numbers
    System.out.print("Enter first number: ");
    int a = sc.nextInt();

    System.out.print("Enter second number: ");
    int b = sc.nextInt();

    System.out.print("Enter third number: ");
    int c = sc.nextInt();

    // Determine the largest number
    int largest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b>=c)
        largest = b;
    else
        largest = c;

    System.out.println("The largest number is: " + largest);

    sc.close();        

  }
}