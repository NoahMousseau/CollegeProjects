import java.util.*;

public class Main {
    public static void main(String[] args) {
        //Get user input
        Scanner input = new Scanner(System.in);
        String userInput;
        System.out.println("Enter a SSN: ");
        userInput = input.nextLine();

        //Test user input if accurate SSN input
        char sep1 = userInput.charAt(3);
        char sep2 = userInput.charAt(6);
        if (sep1 == '-' && sep2 == '-') {
            System.out.println(userInput + " is a valid social security number");
        } else {
            System.out.println(userInput + " is not a valid social security number");
        }
    }
}