// Java program to check if a string is a palindrome
import java.util.Scanner;

public class PalindromeString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take input string from user
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        // Reverse the string
        String reversed = new StringBuilder(input).reverse().toString();

        // Compare original and reversed string (ignoring case)
        if (input.equalsIgnoreCase(reversed)) {
            System.out.println("The string is a palindrome.");
        } else {
            System.out.println("The string is not a palindrome.");
        }

        sc.close();
    }
}
