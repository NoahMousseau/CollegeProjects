import java.util.*;

public class Main {
    public static void main(String[] args) {
        //Generate size of matrix values between 2 and 3 inclusive
        int randomInt1 = (int) ((Math.random() * 2) + 2);
        int randomInt2 = (int) ((Math.random() * 2) + 2);
        //Create matrix
        double[][] m = new double[randomInt1][randomInt2];
        //Display size of matrix
        System.out.println("Enter a " + randomInt1 + " by " + randomInt2 + " matrix row by row:");
        //Get userinput for matrix values
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < randomInt1; i++) {
            for (int j = 0; j < randomInt2; j++) {
                m[i][j] = input.nextDouble();
            }
        }
        //Check if matrix is Markov matrix
        boolean isMarkov = isMarkovMatrix(m);
        if (isMarkov) {
            System.out.println("It is a Markov matrix");
        } else {
            System.out.println("It is not a Markov matrix");
        }
    }
    public static boolean isMarkovMatrix(double[][] m) {
        // Check if the matrix is square (n x n)
        for (int i = 0; i < m.length; i++) {
            if (m[i].length != m.length) {
                return false;
            }
        }
        // Check if all elements are positive
        for (int i = 0; i < m.length; i++) {
            for (int j = 0; j < m.length; j++) {
                if (m[i][j] <= 0) {
                    return false;
                }
            }
        }
        // Check if the sum of elements in each column is 1
        for (int j = 0; j < m.length; j++) {
            double columnSum = 0;
            for (int i = 0; i < m.length; i++) {
                columnSum += m[i][j];
            }
            if (columnSum != 1) {
                return false;
            }
        }
        // If all conditions are met, the matrix is a Markov matrix
        return true;
    }
}