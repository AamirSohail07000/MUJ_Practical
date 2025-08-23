// Java program to check whether the input number is prime or not

import java.util.Scanner;

public class CheckPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Taking input from user
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        
        boolean isPrime = true;

        // Prime numbers are greater than 1
        if (num <= 1) {
            isPrime = false;
        } else {
            // Check divisibility
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        // Output
        if (isPrime) {
            System.out.println(num + " is a Prime number.");
        } else {
            System.out.println(num + " is NOT a Prime number.");
        }
        
        sc.close();
    }
}
