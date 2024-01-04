//Chapter 4 Notes

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //Mathematical functions, characters, and string
        //Math class constants: PI, E
        //Must use class Math.(name of method)
        System.out.println(Math.PI);
        //Common methods, rounding, exponents, power, floor, ceil, rint (round down to nearest int)
        int min = 7;
        int max = 22;
        for(int i=0;i<10;i++) {
            //Generates a random number between min and max, inclusive
            int x = min + (int)(Math.random() * (max - min + 1));
            System.out.println(x);
        }
        //Character data type 'char'
        char letter = 'A'; //ASCII
        char numChar = '4'; //ASCII
        char hexLetter = '\u0041'; //Indicates unicode, with 0041 being hexadecimal code representing a char
        char huxNumChar = '\u0034'; //Unicode
        System.out.println(letter++);
        //Unicode is an encoding scheme, 16 bit, that takes two bytes expressed with 4 hexadecimal values, from
        //0000 to FFFF
        int i = '4'; //Same as int i = (int)'i';
        char c = 97; //Same as char c = (char)97;
        char ch = 'B';
        //Able to compare char values just like int values
        if (ch >= 'A' && ch <= 'Z')
            System.out.println(ch + " is an uppercase letter");
        else if (ch >= 'a' && ch <= 'z')
            System.out.println(ch + " is a lowercase letter");
        else if (ch >= '0' && ch <= '9')
            System.out.println(ch + " is a numeric character");
        //Common methods for char include: idDigit, isLetter, isLetterOrDigit, isLowercase, isUppercase, toLowercase, toUpperCase
        //String data types
        String message = "Welcome to java!"; //Called a reference type, not primitive type
        //Common methods for string include: length, charAtIndex, concat, toUppercase, toLowercase, trim
        //As strings in java are objects, the associated methods must be called with the object
        System.out.println("The length of message (" + message + ") is: " + message.length());
        System.out.println("The first letter in string message is: " + message.charAt(0));
        System.out.println(message.toLowerCase());
        System.out.println(message.toUpperCase());
        //Comparing strings
        //equals(s1) - returns true if string is the same as s1
        //equalsIgnoreCase(s1) - returns true if string characters are the same as s1
        //compareTo(s1) - returns a number greater than, equal to, or less than 0 to indicate if the string is
        //                greater than, equal to, or less than s1
        //compareToIgnoreCase - same as above, ignores case
        //startsWith(prefix) - returns true if string starts with prefix
        //endsWith(suffix) - returns true if string ends with suffix
        //Casting strings
        String intString = "123";
        int intValue = Integer.parseInt(intString); //To convert a string of numbers to an int
        //Can perform the same operation with doubles

        //String formatting
        //To format strings use: System.out.printf(format, items);
        int count = 5;
        double amount = 45.46;
        System.out.printf("Count is %d and amount is %f",count, amount);
        System.out.println();
        //Another example
        double interestRate = 0.13;
        double interest = interestRate * amount;
        System.out.printf("Interest is $%4.2f", interest); //4 is field width, 2 is precision, f is conversion code for the floating point number 45.46
        System.out.println();

        //To read user input
        Scanner input = new Scanner(System.in);
        System.out.print("Enter three words separated by spaces: ");
        String s1 = input.next();
        String s2 = input.next();
        String s3 = input.next();
        System.out.println("s1 is " + s1);
        System.out.println("s2 is " + s2);
        System.out.println("s3 is " + s3);
    }
}