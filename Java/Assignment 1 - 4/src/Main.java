import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int lot1 = (int)(Math.random() * 10);
        int lot2 = (int)(Math.random() * 10);
        int lot3 = (int)(Math.random() * 10);
        System.out.println("Enter your lottery pick (three digits): ");
        int userInput = input.nextInt();
        int valueReward = 0;
        String lotNumStr = "" + lot1 + lot2 + lot3;
        int lotNum = Integer.parseInt(lotNumStr);
        int userIn1 = userInput / 100;     // Extracts the hundreds digit
        int userIn2 = (userInput / 10) % 10; // Extracts the tens digit
        int userIn3 = userInput % 10;      // Extracts the ones digit
        System.out.println("Lottery is: " + lotNumStr);
        int flag1 = 0;
        int flag2 = 0;
        int flag3 = 0;
        if (lotNum == userInput) {
            valueReward = 10000;
            System.out.println("Exact match: you win $" + valueReward);
        } else {
            for(int i = 0; i<lotNumStr.length(); i++) {
                if (userIn1 == lot1) {
                    flag1 = 1;
                }
                if (userIn1 == lot2) {
                    flag1 = 1;
                }
                if (userIn1 == lot3) {
                    flag1 = 1;
                }
            }
            for(int i = 0; i<lotNumStr.length(); i++) {
                if (userIn2 == lot1) {
                    flag2 = 1;
                }
                if (userIn2 == lot2) {
                    flag2 = 1;
                }
                if (userIn2 == lot3) {
                    flag2 = 1;
                }
            }
            for(int i = 0; i<lotNumStr.length(); i++) {
                if (userIn3 == lot1) {
                    flag3 = 1;
                }
                if (userIn3 == lot2) {
                    flag3 = 1;
                }
                if (userIn3 == lot3) {
                    flag3 = 1;
                }
            }
        }
        if (flag1 == 0 && flag2 == 0 && flag3 == 0) {
            System.out.println("Sorry, not match");
        } else if (flag1 + flag2 + flag3 == 1) {
            System.out.println("Match one digit: you win $1000");
        } else if (flag1 + flag2 + flag3 == 2) {
            System.out.println("Match two digits: you win $2000");
        } else if (flag1 + flag2 + flag3 == 3) {
            System.out.println("Match three digits: you win $3000");
        }
    }
}