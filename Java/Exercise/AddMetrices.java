// Program to Add Two Matrices
import java.util.Scanner;

public class AddMetrices{
    public static void main(String[] args) {
        // Declare variables for matrix sizes
        int p, q, m, n;

        // Create Scanner object for input
        Scanner sc = new Scanner(System.in);

        // Step 1: Take input for sizes of both matrices
        System.out.print("Enter number of rows and columns of first matrix: ");
        p = sc.nextInt(); // Rows of first matrix
        q = sc.nextInt(); // Columns of first matrix

        System.out.print("Enter number of rows and columns of second matrix: ");
        m = sc.nextInt(); // Rows of second matrix
        n = sc.nextInt(); // Columns of second matrix

        // Step 2: Check if addition is possible
        if (p == m && q == n) {
            // Declare matrices
            int a[][] = new int[p][q]; // First matrix
            int b[][] = new int[m][n]; // Second matrix
            int c[][] = new int[m][n]; // Resultant matrix (sum)

            // Step 3: Input elements of first matrix
            System.out.println("Enter elements of first matrix:");
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < q; j++) {
                    a[i][j] = sc.nextInt();
                }
            }

            // Step 4: Input elements of second matrix
            System.out.println("Enter elements of second matrix:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    b[i][j] = sc.nextInt();
                }
            }

            // Step 5: Print the first matrix
            System.out.println("\nFirst Matrix:");
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < q; j++) {
                    System.out.print(a[i][j] + " ");
                }
                System.out.println();
            }

            // Step 6: Print the second matrix
            System.out.println("\nSecond Matrix:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(b[i][j] + " ");
                }
                System.out.println();
            }

            // Step 7: Add both matrices
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < n; j++) {
                    c[i][j] = a[i][j] + b[i][j]; // Add corresponding elements
                }
            }

            // Step 8: Print the resultant matrix
            System.out.println("\nMatrix after addition:");
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(c[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            // If matrix sizes do not match, addition not possible
            System.out.println("Addition not possible. Matrices must be of same size.");
        }

        sc.close();
    }
}
