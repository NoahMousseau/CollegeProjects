import java.util.*;

public class Main {
    public static void main(String[] args) {
        //Create scanner and get user input string
        Scanner input = new Scanner(System.in);
        String userString;
        System.out.println("Enter a string of characters: ");
        userString = input.nextLine();

        //Variables for counting letter
        int count = 1;
        int a = 0;
        int e = 0;
        int i = 0;
        int o = 0;
        int u = 0;

        //Loop to iterate through user string
        for(int j = 0; j < userString.length(); j++) {
            char c = userString.charAt(j);
            if (c == 'a') {
                a++;
            } else if (c == 'e') {
                e++;
            } else if (c == 'i') {
                i++;
            } else if (c == 'o') {
                o++;
            } else if (c == 'u') {
                u++;
            } else {
                count++;
            }
        }

        //Print results
        System.out.println("Number of each lowercase voewl in the string:");
        System.out.println("a: " + a);
        System.out.println("e: " + e);
        System.out.println("i: " + i);
        System.out.println("o: " + o);
        System.out.println("u: " + u);
        System.out.println("other characters: " + count);
    }
}