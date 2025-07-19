import java.util.Scanner;

public class SumAndAverage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the size of the array
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        // Create array and take input
        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Calculate sum and average
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        double average = (double) sum / n;

        // Print results
        System.out.println("Sum = " + sum);
        System.out.println("Average = " + average);

        sc.close();
    }
}
