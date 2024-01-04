import java.util.Scanner;

//Noah Mousseau
//Assignment 3 - 17
public class Candidates {
    public static void main(String[] args) {
        //Create scanner
        Scanner input = new Scanner(System.in);
        //Create arrays to store names and vote amount
        String names[];
        int votes[];
        names = new String[5];
        votes = new int[5];
        //For loop to get values
        System.out.println("Enter last names of 5 candidates and votes received for each:");
        for (int i = 0; i < 5; i++) {
            System.out.print("Enter last name: ");
            names[i] = input.nextLine();
            System.out.print("Enter votes received: ");
            votes[i] = input.nextInt();
        }
        //Sum all votes
        int sum = 0;
        sum = voteSum(votes, sum);
        //Return winner
        String winner = winner(names, votes);
        // Header formatting
        System.out.printf("%-15s%-17s%-20s%n", "Candidate", "Votes Received", "% of Total Votes");
        // Candidate information formatting
        for (int i = 0; i < 5; i++) {
            double percentage = (100.0 * votes[i] / sum);
            System.out.printf("%-15s%-17d%-20.2f%%%n", names[i], votes[i], percentage);
        }
        System.out.println("Winner: " + winner);
    }
    public static String winner(String names[], int votes[]) {
        int highest = votes[0];
        int winnerVal = 0;
        for (int i = 0; i < votes.length; i++) {
            if (highest <= votes[i]) {
                highest = votes[i];
                winnerVal = i;
            }
        }
        return names[winnerVal];
    }
    public static int voteSum(int votes[], int sum) {
        for (int i = 0; i < votes.length; i++) {
            sum += votes[i];
        }
        return sum;
    }
}