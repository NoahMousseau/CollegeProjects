import java.io.*;
import java.util.Scanner;

public class CodeProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean continueProgram = true;

        while (continueProgram) {
            System.out.println("Welcome to the Cipher program.");
            System.out.println("Type 1 for Substitution Cipher.");
            System.out.println("Type 2 for Shuffle Cipher.");

            int choice = scanner.nextInt();
            Cipher cipher = null;

            if (choice == 1) {
                System.out.println("What is the key (shift amount) for your code?");
                int shiftAmount = scanner.nextInt();
                cipher = new SubstitutionCipher(shiftAmount);
            } else if (choice == 2) {
                System.out.println("What is the key (shuffle amount) for your code?");
                int shuffleAmount = scanner.nextInt();
                cipher = new ShuffleCipher(shuffleAmount);
            } else {
                System.out.println("Invalid choice. Please choose 1 or 2.");
                continue;
            }

            if (cipher != null) {
                System.out.println(cipher.cipherType());

                scanner.nextLine(); // Consume the newline character

                System.out.println("Enter input file name");
                String inputFile = scanner.nextLine();
                System.out.println("Enter output file name");
                String outputFile = scanner.nextLine();

                System.out.println("Encode (E) or Decode (D)");
                String operation = scanner.nextLine();

                try {
                    String content = readFile(inputFile);
                    String result = "";
                    if (operation.equalsIgnoreCase("E")) {
                        result = ((MessageEncoder) cipher).encode(content);
                    } else if (operation.equalsIgnoreCase("D")) {
                        result = ((MessageDecoder) cipher).decode(content);
                    } else {
                        System.out.println("Invalid operation. Please choose 'E' or 'D'.");
                        continue;
                    }
                    writeFile(outputFile, result);
                    System.out.println("Operation completed successfully. Result saved in " + outputFile);
                } catch (IOException e) {
                    System.out.println("An error occurred while performing the operation: " + e.getMessage());
                }
            }

            System.out.println("Do you want to do another message (Y/N)");
            String answer = scanner.next();
            continueProgram = answer.equalsIgnoreCase("Y");
        }

        scanner.close();
    }

    private static String readFile(String fileName) throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader(fileName));
        StringBuilder content = new StringBuilder();
        String line;
        while ((line = reader.readLine()) != null) {
            content.append(line).append("\n");
        }
        reader.close();
        return content.toString();
    }

    private static void writeFile(String fileName, String content) throws IOException {
        BufferedWriter writer = new BufferedWriter(new FileWriter(fileName));
        writer.write(content);
        writer.close();
    }
}
