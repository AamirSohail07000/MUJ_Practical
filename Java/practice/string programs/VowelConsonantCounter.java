// Java program to count vowels and consonants in a string
import java.util.Scanner;

public class VowelConsonantCounter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take input from user
        System.out.print("Enter a string: ");
        String input = sc.nextLine().toLowerCase();

        int vowels = 0, consonants = 0;

        // Check each character
        for (char ch : input.toCharArray()) {
            if (Character.isLetter(ch)) {
                if ("aeiou".indexOf(ch) != -1) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);

        sc.close();
    }
}


// if (Character.isLetter(ch))
// This checks if the current character is a letter (A to Z or a to z).

// It ignores spaces, punctuation, digits, or special characters.

// Character.isLetter(ch) returns true only if ch is an alphabet letter.


// if ("aeiou".indexOf(ch) != -1)
// This checks if the character is a vowel.

// "aeiou" is a string of all lowercase vowels.

// .indexOf(ch) searches for the character ch in the string "aeiou":

// If ch is found, it returns its index (like 0, 1, 2, etc.).

// If ch is not found, it returns -1.

// So, != -1 means: "If the character is a vowel".