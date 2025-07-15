// Java program to compare two strings
import java.util.Scanner;

public class CompareStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take two strings as input
        System.out.print("Enter first string: ");
        String str1 = sc.nextLine();

        System.out.print("Enter second string: ");
        String str2 = sc.nextLine();

        // Compare using equals
        if (str1.equals(str2)) {
            System.out.println("Strings are exactly the same.");
        } else if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Strings are the same (ignoring case).");
        } else {
            System.out.println("Strings are different.");
        }

        sc.close();
    }
}
