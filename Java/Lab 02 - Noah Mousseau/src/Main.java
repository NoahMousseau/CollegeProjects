import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        //Setup for program
        Scanner input = new Scanner(System.in);
        int[] letterCount = new int[26];
        boolean continueProgram = true;
        //While loop to continuously run program
        while (continueProgram) {
            //Get user input of line of text
            System.out.println("Enter a line of text:");
            String text = input.nextLine();
            //Run methods to get and generate output
            countLetters(text, letterCount);
            displayLetterCounts(letterCount);
            //Get user input to continue or stop program
            System.out.println("Do you want to enter another line? (y for 'yes'), (n for 'no'):");
            String choice = input.nextLine().toLowerCase();
            //Check to continue program
            if (choice.equals("n")) {
                continueProgram = false;
            } else {
                //Clear array for next user input
                Arrays.fill(letterCount, 0);
            }
        }
    }
    public static void countLetters(String text, int[] letterCount) {
        for (int i = 0; i < text.length(); i++) {
            //Sets all char in string to lowercase
            char ch = Character.toLowerCase(text.charAt(i));
            if (ch >= 'a' && ch <= 'z') {
                //Check if char value is within ascii index
                int index = ch - 'a';
                letterCount[index]++;
            }
        }
    }
    public static void displayLetterCounts(int[] letterCount) {
        for (int i = 0; i < letterCount.length; i++) {
            if (letterCount[i] > 0) {
                //Get ascii letter
                char letter = (char) ('A' + i);
                //Output count values from letterCount array
                System.out.println(letter + " " + letterCount[i]);
            }
        }
    }
}