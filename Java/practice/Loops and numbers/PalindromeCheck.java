// Check if a number is palindrome
import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int original = num, reversed = 0;

        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        if (original == reversed)
            System.out.println(original + " is a Palindrome.");
        else
            System.out.println(original + " is not a Palindrome.");

        sc.close();
    }
}

// A palindrome number is a number that remains the same when its digits are reversed.

// Brief Explanation:
// For example, 121 is a palindrome because reversing the digits also gives 121. Similarly, 12321 is a palindrome. Palindromes are the same forwards and backwards. They are commonly used in pattern recognition, coding challenges, and string manipulation tasks.
