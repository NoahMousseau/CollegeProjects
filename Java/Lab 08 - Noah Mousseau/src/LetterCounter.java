import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

public class LetterCounter {
    public static void main(String[] args) {
        try {
            BufferedReader reader = new BufferedReader(new FileReader("Lincoln.txt"));
            StringBuilder content = new StringBuilder();
            String line;
            int lines = 0;
            int words = 0;
            while ((line = reader.readLine()) != null) {
                content.append(line).append("\n");
                lines++;
                words += line.split("\\s+").length;
            }
            reader.close();
            String fileContent = content.toString();
            int[] letterCounts = countLetters(fileContent);
            System.out.println("Enter file name: Lincoln.txt");
            System.out.println("Lincoln.txt file has " + lines + " lines and " + words + " words.");
            //Displays letter occurrences in console
            displayLetterOccurrences(letterCounts);
            //Writes letter occurrences to a file
            writeToOutputFile("letterCount.txt", lines, words, letterCounts);
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
    private static int[] countLetters(String content) {
        int[] letterCounts = new int[26]; //For holding lettercounts
        for (char c : content.toCharArray()) {
            if (Character.isLetter(c)) {
                char lowerC = Character.toLowerCase(c);
                letterCounts[lowerC - 'a']++;
            }
        }
        return letterCounts;
    }
    private static void displayLetterOccurrences(int[] letterCounts) {
        for (int i = 0; i < letterCounts.length; i++) {
            char letter = (char) (i + 'A');
            int count = letterCounts[i];

            System.out.println("The occurrence of " + letter + "'s is " + count);
        }
    }
    private static void writeToOutputFile(String fileName, int lines, int words, int[] letterCounts) throws IOException {
        try (PrintWriter writer = new PrintWriter(fileName)) {
            writer.println("Enter file name: Lincoln.txt");
            writer.println("Lincoln.txt file has " + lines + " lines and " + words + " words.");
            //Write letter occurrences to file
            for (int i = 0; i < letterCounts.length; i++) {
                char letter = (char) (i + 'A');
                int count = letterCounts[i];
                writer.println("The occurrence of " + letter + "'s is " + count);
            }
        }
    }
}
