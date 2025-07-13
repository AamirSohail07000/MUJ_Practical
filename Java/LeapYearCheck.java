// Java program to check whether a year is a leap year or not

import java.util.Scanner;

public class LeapYearCheck {

    public static void main(String[] args) {
        
        // Create Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);
        
        // Ask the user to enter a year
        System.out.print("Enter a year: ");
        int year = scanner.nextInt(); // Read the year from user input
        
        // Check whether the year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println(" is a leap Year.");
        } else {
            System.out.println("not a leap year.");
        }

        // Close the scanner object
        scanner.close();
    }
}
