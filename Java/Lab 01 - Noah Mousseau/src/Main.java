//Noah Mousseau Lab 01
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //Question 1
        //Create new Random class object
        Random rand = new Random();
        //Generate numbers for letter conversion
        int randInt1 = rand.nextInt(26);
        int randInt2 = rand.nextInt(26);
        int randInt3 = rand.nextInt(26);
        //Generate numbers for plate
        int randInt4 = rand.nextInt(10);
        int randInt5 = rand.nextInt(10);
        int randInt6 = rand.nextInt(10);
        int randInt7 = rand.nextInt(10);
        //Convert first 3 int to char
        char ch1 = (char)(randInt1 + 65);
        char ch2 = (char)(randInt2 + 65);
        char ch3 = (char)(randInt3 + 65);
        //Print license plate
        System.out.println("A random vehicle plate number: " + ch1 + ch2 + ch3 + randInt4 + randInt5 + randInt6 + randInt7);

        //Question 2
        //Create new scanner
        Scanner input = new Scanner(System.in);
        //Get user input
        System.out.print("Enter the first 9 digits of an ISBN as integer: ");
        int userInt = input.nextInt();
        //Separate userInt into 9 values
        int digit1 = userInt / 100000000;
        int digit2 = (userInt / 10000000) % 10;
        int digit3 = (userInt / 1000000) % 10;
        int digit4 = (userInt / 100000) % 10;
        int digit5 = (userInt / 10000) % 10;
        int digit6 = (userInt / 1000) % 10;
        int digit7 = (userInt / 100) % 10;
        int digit8 = (userInt / 10) % 10;
        int digit9 = userInt % 10;
        //Create and get digit10
        int digit10 = (digit1 + digit2 * 2 + digit3 * 3 + digit4 * 4 + digit5 * 5 + digit6 * 6 + digit7 * 7 + digit8 * 8 + digit9 * 9) % 11;
        //If digit10 = 10
        if (digit10 == 10) {
            System.out.println("The ISBN-10 number is " + userInt + "X");
        } else {
            System.out.println("The ISBN-10 number is " + userInt + digit10);
        }
    }
}