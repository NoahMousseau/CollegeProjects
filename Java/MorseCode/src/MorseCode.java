import java.util.*;
public class MorseCode {
   public static void program() {
        int continueProgram = 1;
        while (continueProgram == 1) {
            continueProgram = printDisplay();
        }
        System.out.println("Thanks for using this program!");
    }
    //Display program
    public static int printDisplay() {
        //Set up display
        System.out.println("Hello, this program allows you to translate text to morse code or translate morse code to text.");
        System.out.println("");
        System.out.println("Please, select one o the below options:");
        System.out.println("***Enter 't' for encoding text");
        System.out.println("***Enter 'm' for decoding morse code");
        System.out.println("***Enter 'e' to exit the program");
        //Read user input
        Scanner input = new Scanner(System.in);
        char userInput;
        userInput = (input.nextLine()).charAt(0);
        //If-else statements for choices
        while (userInput != 't' && userInput != 'm' && userInput != 'e') {
            System.out.println("***invalid option***");
            System.out.println("Please enter a valid option:");
            userInput = (input.nextLine()).charAt(0);
        }
        if (userInput == 't') {
            textToMorseCode(input);
            return 1;
        } else if (userInput == 'm') {
            morseCodeToText(input);
            return 1;
        } else if (userInput == 'e') {
            return 0;
        }
        return 1;
    }
    public static void morseCodeToText(Scanner input) {
        String[] alphabetNumbers = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0"};
        String[] morseCode = {".-","-...","-.-.","-..",".","..-.","--.","... .","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",".--","-..-","-.--","--..",".----","..---","... --","... .-","... ..","-... .","--...","---..","----.","-----"};
        System.out.println("Please enter a Morse code:");
        String morsePhrase = input.nextLine();
        //Split Morse code into words
        StringBuilder textOutput = new StringBuilder();
        String[] morseWords = morsePhrase.trim().split("   ");

        for (String morseWord : morseWords) {
            //Split each word into Morse code characters
            String[] morseCharacters = morseWord.split(" ");
            for (String morseChar : morseCharacters) {
                int index = Arrays.asList(morseCode).indexOf(morseChar);
                if (index != -1) {
                    textOutput.append(alphabetNumbers[index]);
                } else {
                    System.out.println("Morse code '" + morseChar + "' cannot be translated to text.");
                    continue;
                }
            }
            //Add space between words
            textOutput.append(" ");
        }
        //Print text output
        System.out.println("Text:");
        System.out.println(textOutput.toString().trim());
    }
    public static void textToMorseCode(Scanner input) {
        String[] alphabetNumbers = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0"};
        String[] morseCode = {".-","-...","-.-.","-..",".","..-.","--.","... .","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",".--","-..-","-.--","--..",".----","..---","... --","... .-","... ..","-... .","--...","---..","----.","-----"};
        System.out.println("Please enter a phrase");
        String phrase = input.nextLine();
        //Convert string into array of char
        char[] charArray = phrase.toCharArray();
        //Upper case characters in array
        for (int i = 0; i < charArray.length; i++) {
            charArray[i] = Character.toUpperCase(charArray[i]);
        }
        //Convert charArray to string for easy comparison
        String[] stringArray = new String[charArray.length];
        for (int i = 0; i < stringArray.length; i++) {
            stringArray[i] = String.valueOf(charArray[i]);
        }
        //Create array for output
        String[] output = new String[charArray.length];
        //Go through charArray and convert to morse code
        for (int i = 0; i < output.length; i++) {
            //If space in stringArray
            if (stringArray[i].equals(" ")) {
                output[i] = "   ";
            } else {
                //If letter in stringArray
                for (int j = 0; j < alphabetNumbers.length; j++) {
                    if (stringArray[i].equals(alphabetNumbers[j])) {
                        output[i] = morseCode[j] + " ";
                    }
                }
            }
        }
        //Print morse code statement
        System.out.println("MorseCode:");
        for (String s : output) {
            System.out.print(s);
        }
        System.out.println("");
    }
    //Testing
    public static void main(String args[]) {
        program();
    }
}
