// Input a number and print its prime factors

import java.util.Scanner;

public class PrimeFactors {
    public static void main(String[] args) {
        // Create Scanner object to take input from user
        Scanner scanner = new Scanner(System.in);

        // Step 1: Input the number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Step 2: Print prime factors
        System.out.print("Prime factors of " + number + " are: ");

        // Handle factor 2 separately (smallest prime)
        while (number % 2 == 0) {
            System.out.print(2 + " ");
            number = number / 2;
        }

        // Step 3: Check odd factors from 3 to sqrt(number)
        for (int factor = 3; factor <= Math.sqrt(number); factor += 2) {
            while (number % factor == 0) {
                System.out.print(factor + " ");
                number = number / factor;
            }
        }

        // Step 4: If number is still greater than 2, then it's prime
        if (number > 2) {
            System.out.print(number);
        }

        // Close Scanner
        scanner.close();
    }
}
