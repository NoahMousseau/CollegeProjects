//Importing the Java Date, Random, and SecureRandom classes contained in the Java library

import javax.xml.bind.SchemaOutputResolver;
import java.util.Date;
//Date can be used to create an instance of the current date and time and use the toString
//method to return the date and time as a string

import java.util.Random;
//The Random class can be used to obtain a random double value between 0.0 and 1.0 (excluding 1.0)
//Generating secure random numbers can be done by using the SecureRandom class
import java.security.SecureRandom;

//Primitive data types are not considered objects in Java
//However, many methods require the use of objects as arguments
//The wrapper class can be used to process primitive data type values as objects
//There are Boolean, Char, Double, Float, Byte, Short, Integer, and Longer wrapper classes
//Importing the wrapper classes for Integer and Double
import java.lang.Integer;
import java.lang.Double;
//Integer and Double class constants: MAX_VALUE, MIN_VALUE

//Importing java Math class to work with BigInteger and BigDecimal
import java.math.*;

public class Main {
    public static void main(String[] args) {

        //Using the Date class
        Date date = new Date(); //Current date and time
        System.out.println("The elapsed time since Jan 1, 1970 is " + date.getTime() + " milliseconds");
        System.out.println(date.toString());
        //Using the Random class
        Random rand1 = new Random(3);
        Random rand2 = new Random(3);
        //These two Random variables both have seed 3, they will output the same value
        System.out.print("Random 1: ");
        for (int i = 0; i < 10; i++) {
            System.out.print(rand1.nextInt(1000) + " ");
        }
        System.out.println("");
        System.out.print("Random 2: ");
        for (int i = 0; i < 10; i++) {
            System.out.print(rand2.nextInt(1000) + " ");
        }

        //Moving on to Wrapper classes
        //The following statements display the maximum integer and the maximum double
        System.out.println("The maximum integer is: " + Integer.MAX_VALUE);
        System.out.println("The minimum positive float is: " + Float.MIN_VALUE);
        System.out.println("The maximum double-precision floating-point number is " + Double.MAX_VALUE);
        //A wrapper object can be constructed from either a primitive data type value or from
        //a string representing the numeric value
        //For example, the constructors for Integer and Double are:
        //  public Integer(int value); //new Integer(5)
        //  public Integer(String s); //new Integer("5")
        //  public Double(double value); //new Double(5.0)
        //  public Double(String s); //new Double("5.0")
        //Wrapper classes contain methods for returning a double, float, int, long, or short
        //value for the wrapper object
        int i1 = new Double(12.4).intValue(); //returns 12
        double d1 = new Integer(12).doubleValue(); //returns 12.0

        //The valueOf(String s) method can be used to create a new object initialized to the value
        //represented by the specified string
        double doubleObject = Double.valueOf("12.4");
        int integerObject = Integer.valueOf("12");
        //Each numeric wrapper class has two overloaded parsing methods to parse a numeric string
        //into and appropriate numeric value based on 10, or any specified radix
        //The below two methods are in the Integer class
        int parseInt1 = Integer.parseInt("11",2); //returns 3, base 2
        int parseInt2 = Integer.parseInt("12",8); //returns 10, base 8
        int parseInt3 = Integer.parseInt("13",10); //returns 13, base 10
        int parseInt4 = Integer.parseInt("1A", 16); //returns 26, base 16, hexadecimal

        //A primitive-type value can be automatically converted to an object using a wrapper class,
        //and vice versa
        //Converting a primitive value to a wrapper object is called boxing. The reverse is called
        //unboxing
        //Java allows primitive types and wrapper classes to be converted automatically, this is called
        //autoboxing and autounboxing
        //The following two statements are equivalent, but the second statement uses
        //autoboxing and autounboxing
        int intObject1 = new Integer(2);
        //is equivalent to
        int intObject2 = 2;
        //while
        int int1 = 1;
        //is equivalent to
        int int2 = new Integer(1);

        //BigIntegers and BigDecimal classes are used to compute with very large numbers, or high
        //precision floating-point values
        //BigInteger
        BigInteger a = new BigInteger("9223372036854775807");
        BigInteger b = new BigInteger("2");
        BigInteger c = a.multiply(b); //Sets c = a * b
        System.out.println(c);
        //BigDecimal
        BigDecimal ad = new BigDecimal(1.0);
        BigDecimal bd = new BigDecimal(3.0);
        BigDecimal cd = ad.divide(bd, 20, BigDecimal.ROUND_UP);
        System.out.println(cd);

        //String class
        //A string object can be created from a string literal or from an array of characters
        char[] charArray = {'G','o','o','d','D','a','y'};
        String message = new String(charArray);
        //A string variable holds a reference to the string object that stores a string value
        //A string object is immutable, its contents cannot be changed
        //Does the following code change the contents of the string?
        String s = "Java";
        s = "HTML";
        //Changes the object that the reference s points to
        System.out.println(s);

        //Java strings are immutable and frequently used, so the JVM uses a unique instance for string
        //literals with the same character sequence, called interned
        String s1 = "Welcome to Java";
        String s2 = new String("Welcome to Java");
        String s3 = "Welcome to Java";
        System.out.println("s1 == s2 is: " + (s1 == s2)); //false
        System.out.println("s1 == s3 is: " + (s1 == s3)); //true
        //A new object is created if you use the new operator
        //If you use the string initializer, no new object is created if the interned object is
        //already created

        //Replacing and Splitting Strings
        //replace(oldChar: char, newChar: char): String
        //  -Returns a new string that replaces all matching characters in the string with the new character
        //replaceFirst(oldString: String, newString: String): String
        //  -Returns a new string that replaces the first matching substring in the string with the new substring
        //replaceAll(oldString: String, newString: String): String
        //  -Returns a new string that replaces all matching substrings in the string with the new substring
        //split(delimiter: String): String[]
        //  -Returns an array of strings consisting of the substrings split by the delimiter
        //Examples:
        System.out.println("Welcome".replace('e','A'));
        System.out.println("Welcome".replaceFirst("e","AB"));
        System.out.println("Welcome".replace("e","AB"));
        System.out.println("Welcome".replace("el","AB"));
        //Splitting a String
        String[] tokens = "Java#HTML#Perl".split("#");
        for(int i = 0; i < tokens.length; i++) {
            System.out.print(tokens[i] + " ");
        }
        System.out.println("");

        //You can match, replace, or split a string by specifying a pattern
        //A regular expression (regex) is a string that describes a pattern for matching a set of strings
        //Using the matches method
        System.out.println("Java is fun".matches("Java.*"));
        System.out.println("Java is cool".matches("Java.*"));
        //The following statement is true
        System.out.println("440-02-4534".matches("\\d{3}-\\d{2}-\\d{4}"));
        //In the above expression, \\d represents a single digit, and \\d{3} represents 3 digits
        //The replaceAll, replaceFirst, and split methods can be used with a regular expression
        String s4 = "a+b$#c".replaceAll("[$+#]", "NNN");
        System.out.println(s4);
        //Above expression with print aNNNbNNNNNNc

        //Can convert from a string to a char array with:
        char[] chars = "Java".toCharArray();
        //To convert from a char array to a string, use String(char[]) constructor, or the valueOf(char[]) method
        String str = new String(new char[]{'J','a','v','a'});
        System.out.println(str);
        //Can also use something like String.valueOf(5.44); to convert numeric values to strings

        //Formatting strings
        String s5 = String.format("%7.2f%6d%-4s", 44.556, 14, "AB");
        System.out.println(s5);
        //Each % sign denotes each item to format, from left to right
        //f is float, d is int, s is string

        //StringBuilder/StringBuffer are alternatives to the String class
        //A StringBuilder/StringBuffer can be used wherever a string is used
        //Able to add, insert, or append new contents into a string buffer, whereas the value of a String
        //object is fixed once the string is created
        //StringBuilder class is similar, except the methods for modifying the buffer in StringBuffer are
        //synchronized, meaning only one task is allowed to execute the methods
        //StringBuilder methods:
        //  -toString()
        //  -capacity()
        //  -charAt(index: int)
        //  -length()
        //  -setLength(newLength: int)
        //  -substring(startIndex: int)
        //  -substring(startIndex: int, endIndex: int)
        //  -trimToSize()
        //StringBuilder constructors:
        //  -StringBuilder()
        //  -StringBuilder(capacity: int)
        //  -StringBuilder(s: String)
    }
}