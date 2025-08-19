// Write a program to check if input is leap year or not a leap year.
import java.util.Scanner;

class LeapYear{
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int year = sc.nextInt();

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400==0)){
      System.out.println("is a leap year.");

    } else {
      System.out.println("not a leap year.");
    }
  } 
}