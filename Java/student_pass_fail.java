import java.util.Scanner;

public class student_pass_fail {

    public static void main(String[] args) {
        // Create scanner object to read input
        Scanner sc = new Scanner(System.in);

        // Read input from user
        int marks = sc.nextInt();
        sc.close();

        // Define passing criteria
        final int Passing_Marks = 35;

        // Check if student passed or failed
        if (marks >= Passing_Marks) {
            System.out.println("Passed");
        } else {
            System.out.println("Failed");
        }
    }
	
}

