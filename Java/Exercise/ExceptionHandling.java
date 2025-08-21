// Write a Java program that reads a list of integers from the user and throws an
// exception if any numbers are duplicates.

import java.util.Scanner;

// Step 1: Create a Custom Exception for duplicate numbers
class DuplicateNumberException extends Exception {
    // Constructor passes message to the Exception class
    public DuplicateNumberException(String message) {
        super(message);
    }
}

public class ExceptionHandling {
    public static void main(String[] args) {
        // Step 2: Create Scanner object for user input
        Scanner scanner = new Scanner(System.in);

        try {
            // Step 3: Ask user how many numbers they want to enter
            System.out.print("Enter how many numbers you want to input: ");
            int n = scanner.nextInt();

            // Step 4: Create an array to store the numbers
            int[] numbers = new int[n];

            System.out.println("Enter " + n + " integers:");

            // Step 5: Read numbers one by one
            for (int i = 0; i < n; i++) {
                int num = scanner.nextInt();

                // Step 6: Check if number already exists in array (manual duplicate check)
                for (int j = 0; j < i; j++) {
                    if (numbers[j] == num) {
                        // If duplicate found, throw custom exception
                        throw new DuplicateNumberException("Duplicate number found: " + num);
                    }
                }

                // Step 7: Store the number in the array if no duplicate
                numbers[i] = num;
            }

            // Step 8: If program reaches here, all numbers are unique
            System.out.println("✅ All numbers are unique!");

        } 
        // Step 9: Handle custom exception
        catch (DuplicateNumberException e) {
            System.err.println("❌ Error: " + e.getMessage());
        } 
        // Step 10: Handle invalid input (like entering letters instead of numbers)
        catch (Exception e) {
            System.err.println("❌ Invalid input. Please enter integers only.");
        } 
        // Step 11: Always close scanner to avoid resource leak
        finally {
            scanner.close();
        }
    }
}
