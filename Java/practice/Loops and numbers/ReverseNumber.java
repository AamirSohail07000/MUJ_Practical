// Reverse a number

import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int reversed = 0;

        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        System.out.println("Reversed number is: " + reversed);
        sc.close();
    }
}



// MUJ Java assignment 1 solution

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int num = sc.nextInt();
         
            // Handle negative numbers
            boolean isNegative = num < 0;
            num = Math.abs(num);

            int reversed = 0;

            while (num !=0) {
                //Check for potential integer overflow
                if (reversed > (Integer.MAX_VALUE/10) || 
                    (reversed == (Integer.MAX_VALUE/10) && (num % 10) > 7)) {
                    System.out.println(0);
                    return;
                }

                int digit = num % 10;
                reversed = reversed * 10 + digit;
                num /= 10;
            }	

            //Restore negative sign if original number is negative
            reversed = isNegative ? -reversed : reversed;
            System.out.println(reversed);
        } catch(Exception e) {
            System.out.println(0); //Return 0 for invalid inputs
        } finally {
            sc.close();
        }

    }
	
}

