// Java program to reverse a string
import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take input from user
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        // Reverse using StringBuilder
        String reversed = new StringBuilder(input).reverse().toString();

        System.out.println("Reversed string: " + reversed);

        sc.close();
    }
}


