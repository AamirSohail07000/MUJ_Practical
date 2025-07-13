// Check if a number is an Armstrong number

import java.util.Scanner;

public class ArmstrongCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int original = num, sum = 0;
        int digits = String.valueOf(num).length();

        while (num != 0) {
            int digit = num % 10;
            sum += Math.pow(digit, digits);
            num /= 10;
        }

        if (sum == original)
            System.out.println(original + " is an Armstrong number.");
        else
            System.out.println(original + " is not an Armstrong number.");

        sc.close();
    }
}


// Explanation
// An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits.
// For example, 153 is an Armstrong number because:
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// It has 3 digits, and when each digit is raised to the power 3 and added, it gives back the original number.