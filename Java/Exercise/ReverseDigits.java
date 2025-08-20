// Write a program to reverse the digits of a given number using while loop.

import java.util.Scanner;
class ReverseDigits{
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int number = scanner.nextInt();
    int reversed = 0;
    while (number != 0) {
      int digit = number % 10;
      reversed = reversed * 10 + digit;
      number = number / 10;
    }
    System.out.println(reversed);
  }
}