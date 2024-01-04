//Imports the library 'System'
//All the classes defined in package 'lang' are available
//Do not need to necessarily include the below statement, as by default, when a program is created in java,
//the information contained within is already preloaded
import java.lang.System;

//To import scanner class
import java.util.*;
//The '*' imports all classes in java.util


//Every Java program must have at least 1 class
//Conventionally, class names start with an uppercase letter, as in "main"
public class Main {
    //The below method "public static void 'main'(String[] args)" is the traditional main method with no arguments
    //One main method is required
    //public indicates the method can be accessed outside the class
    //static can create the method without creating an object for the class
    public static void main(String[] args) {
        //Below is a line of code to print "Hello and welcome!"
        //In the below line, 'out' is an object of the printStream string class, and the 'ln' modifier sets the printer
        //to a new line after the printed text
        System.out.println("Hello and welcome!");
        //Can concatenate a string and number with + sign
        System.out.println("One " + 1);
        System.out.println("Two " + 2);
        //The below statement will give 17 as an answer
        //This is known as a logic error
        System.out.println(2 + 3 * 5);
        //The below statement will give the correct answer, 25
        System.out.println( (2+3) * 5);
        //If a statement like 'System.out.println(3/0)' is compiled and ran at this point, the program will compile,
        //however it will not run past the line the error is found at. Java will tell you the type of error, either
        //runtime error or compilation error, and the line the error is found at

        //Java jas 8 primitive datatypes
        //byte, short, int, long
        //float, double, bool, string
        //2 is an int, 2.0 is a double, '2' is a char, "2" is a string
        //Cannot perform 'int x = 1.5' in java, as in c++, gives an error
        int x = 12; //Is fine
        //Integers can be too large, as in 'int x = 124444444444444444', will give an error
        //'float y = 1.5' will give an error, as by default, 1.5 is a double

        //Below is a for loop, that prints the numbers 1 through 5, one number per line
        for (int i = 1; i <= 5; i++) {
            System.out.println("i = " + i);
        }

        //Conventions:
        //All uppercase constant variables, like PI
        //Class names, uppercase first letter of every word, like MainClassDelta

        //Computing the area of a circle
        double radius;
        double area;
        radius = 20;
        area = radius * radius * 3.14159;
        //To print result:
        System.out.println("The area of a circle with radius " + radius + " is " + area);

        //Implicit conversion
        System.out.println(5/2); //Gives an int, 2
        System.out.println(5.0/2); //Gives a double, 2.5
        //A double like, x = 5.0 will be treated as an integer
        //Doubles are more precise than floats
        //Floating point literal numbers can also be specified with scientific notation

        //To start taking input from user
        //Create scanner object
        //Use the method 'nextDouble()' to obtain a double value
        System.out.println("Input a double value: ");
        //Java refers to 'System.out' to refer to the printing object, and 'System.in' to refer to the default input object
        Scanner input = new Scanner(System.in);
        double y = input.nextDouble();
        System.out.println("Your input was: " + y);
        //To obtain a string
        System.out.println("Input a string value: ");
        //Create a new scanner for string
        Scanner strInput = new Scanner(System.in);
        String z = strInput.nextLine();
        System.out.println("Your string was: " + z);
    }
}