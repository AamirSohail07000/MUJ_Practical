// Write a Java Program to Sort the Array in an Ascending Order

import java.util.Scanner;

public class SortArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        // Step 1: Take array size as input
        System.out.print("Enter number of elements: ");
        int n = s.nextInt();

        // Step 2: Declare array of size 'n'
        int[] a = new int[n];

        // Step 3: Take array elements as input
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }

        // Step 4: Sort array using nested loop
        // (Simple selection sort approach)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    // Swap elements if they are out of order
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        // Step 5: Print sorted array
        System.out.print("Ascending Order: ");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i]);
            if (i < n - 1) {
                System.out.print(", ");
            }
        }

        s.close(); // Close scanner
    }
}
