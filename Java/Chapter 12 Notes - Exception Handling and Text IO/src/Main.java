import java.util.*;
//In Java programming, a method should not terminate a program
//Instead, the method should notify the caller an exception has occurred, and the caller
//should terminate the program

//try-throw-catch Blocks
//  try {
//      Code to run;
//      A statement or method that may throw an exception;
//      More code to run;
//  catch (type ex) {
//      Code to process the exception;
//  }
//The above code allows a method to throw an exception to the caller
//The below code is an example of a try-throw-catch block
public class InputMismatchExceptionDemo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        boolean continueInput = true;

        do {
            try {
                System.out.print("Enter an integer: ");
                int number = input.nextInt();

                // Display the result
                System.out.println(
                        "The number entered is " + number);

                continueInput = false;
            }
            catch (InputMismatchException ex) {
                System.out.println("Try again. (" +
                        "Incorrect input: an integer is required)");
                input.nextLine(); // discard input
            }
        } while (continueInput);
    }
}
//Through handling the above code, the program will continuously read an input until it is correct

//Exceptions:
//  -Represented as objects
//  -Root class for exceptions is java.lang.Throwable
//  -Errors caused by the program and external circumstances
//  -Can be caught and handled by the program
//System Errors:
//  -Thrown by JVM
//  -Represented as the Error class
//  -Describes internal system errors

public class Main {
    public static void main(String[] args) {

    }
}