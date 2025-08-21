// Program to Search a Key Element in an Array
import java.util.Scanner;

public class SearchingKey {
    public static void main(String[] args) {
        // Declare variables
        int n;        // Size of the array
        int x;        // Key element to search
        int flag = 0; // Flag variable to check if element is found (0 = not found, 1 = found)
        int i = 0;    // Loop counter

        // Create Scanner object to take user input
        Scanner s = new Scanner(System.in);

        // Step 1: Input size of array
        System.out.print("Enter the number of elements in the array: ");
        n = s.nextInt();

        // Step 2: Declare array of size n
        int a[] = new int[n];

        // Step 3: Input elements of the array
        System.out.println("Enter " + n + " elements:");
        for (i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }

        // Step 4: Input the element to search
        System.out.print("Enter the element to search: ");
        x = s.nextInt();

        // Step 5: Search for the element in the array using Linear Search
        for (i = 0; i < n; i++) {
            if (a[i] == x) {
                flag = 1; // Element found
                break;    // Exit the loop once element is found
            }
        }

        // Step 6: Print result
        if (flag == 1) {
            // Adding +1 because array index starts from 0, but positions usually start from 1
            System.out.println("Element found at position: " + (i + 1));
        } else {
            System.out.println("Element not found in the array.");
        }
    }
}
