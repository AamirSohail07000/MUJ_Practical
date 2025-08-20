// Write a program to print Fibonacci series up to n terms.

import java.util.Scanner;
public class Fibonacci{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    int count = 0; // to track terms printed
    // Initialize first two terms of Fibonacci series
    int a = 0, b = 1, c;
    System.out.println("Fibonacci series is : ");
    if(n==1) {
      System.out.println("0");
    }
    else if(n==2) {
      System.out.print("0 1");
    }
    else{
      System.out.print("0 1 ");
      count = 3;
      while(count <= n) {
        c = a + b;
        a = b;
        b = c;
        System.out.print(c + " ");
        count++;
      }
    }

  }
}