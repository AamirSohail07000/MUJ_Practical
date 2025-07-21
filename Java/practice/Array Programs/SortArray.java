// Sort an Array in Ascending and Descending Order

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class SortArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input size
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        Integer[] arr = new Integer[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Ascending sort
        Arrays.sort(arr);
        System.out.println("Sorted in ascending order: " + Arrays.toString(arr));

        // Descending sort
        Arrays.sort(arr, Collections.reverseOrder());
        System.out.println("Sorted in descending order: " + Arrays.toString(arr));

        sc.close();
    }
}
