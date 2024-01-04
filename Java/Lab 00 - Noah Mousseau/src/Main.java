import java.util.*;

public class Main {
    public static void main(String[] args) {
        //Ask for user input
        System.out.println("Enter a number of words: ");
        //Create scanner and get user input
        Scanner input = new Scanner(System.in);
        int wordNum = input.nextInt();
        //Create and print words
        for(int i = 0; i < wordNum; i++) {
            System.out.print(wordGen() + " ");
        }
    }
    public static String wordGen() {
        //Create random class instance
        Random rand = new Random();
        //Create array to hold letters
        char arr[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V','W', 'X', 'Y', 'Z'};
        //Generate length of random word
        int wordLen = rand.nextInt(8 - 3 + 1) + 3;
        //Variable to hold word
        String word = "";
        //Create random word length of wordLen
        for(int i = 0; i < wordLen; i++) {
            //Get random index
            int randIndex = rand.nextInt(21);
            word += arr[randIndex];
        }
        return word;
    }
}