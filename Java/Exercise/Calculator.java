// Write a program to create a basic calculator in java.

import java.util.Scanner;
public class Calculator{
  public static void main(String[] args){
    char operator;
    double number1, number2, result;
    
    Scanner sc = new Scanner(System.in);
    operator= sc.next().charAt(0);
    number1 = sc.nextDouble();
    number2 = sc.nextDouble();

    switch(operator){
      case '+':
        result = number1 + number2;
        System.out.println(number1 + " + " + number2 + " = " + result);
        break;
      case '-':
        result = number1 - number2;
        System.out.println(number1 + " - " + number2 + " = " + result);
        break;
      case '*':
        result = number1 * number2;
        System.out.println(number1 + " * " + number2 + " = " + result);
        break;
      case '/':
        result = number1 / number2;
        System.out.println(number1 + " / " + number2 + " = " + result);
        break;
    }
  }
}