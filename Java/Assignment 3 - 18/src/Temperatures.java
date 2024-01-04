import java.util.Scanner;

//Noah Mousseau
//Assignment 3 - 18
public class Temperatures {
    //Private arrays for holding high and low temperatures
    private int[] highTemperatures;
    private int[] lowTemperatures;

    //Constructor method
    public Temperatures(int months) {
        //Initialize variables depending on how many months to be used
        highTemperatures = new int[months];
        lowTemperatures = new int[months];
    }

    public void getData() {
        //Create scanner
        Scanner scanner = new Scanner(System.in);
        //Get high temps for months
        System.out.println("Enter high temperature for each month:");
        for (int i = 0; i < highTemperatures.length; i++) {
            highTemperatures[i] = scanner.nextInt();
        }
        //Get low temps for months
        System.out.println("Enter low temperature for each month:");
        for (int i = 0; i < lowTemperatures.length; i++) {
            lowTemperatures[i] = scanner.nextInt();
        }
    }
    public int averageHigh() {
        //Gets average high over given months
        int sum = 0;
        for (int temperature : highTemperatures) {
            sum += temperature;
        }
        return sum / highTemperatures.length;
    }
    public int averageLow() {
        //Gets average low over given months
        int sum = 0;
        for (int temperature : lowTemperatures) {
            sum += temperature;
        }
        return sum / lowTemperatures.length;
    }
    public int highestTemperature() {
        //Iterates through high temp array, returns highest temp
        int max = highTemperatures[0];
        for (int temperature : highTemperatures) {
            if (temperature > max) {
                max = temperature;
            }
        }
        return max;
    }
    public int lowestTemperature() {
        //Iterates through low temp array, returns lowest temp
        int min = lowTemperatures[0];
        for (int temperature : lowTemperatures) {
            if (temperature < min) {
                min = temperature;
            }
        }
        return min;
    }
    //Main method for personal testing
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of months: ");
        int months = scanner.nextInt();
        Temperatures temperatureAnalyzer = new Temperatures(months);
        temperatureAnalyzer.getData();
        System.out.println("Average high temperature: " + temperatureAnalyzer.averageHigh());
        System.out.println("Average low temperature: " + temperatureAnalyzer.averageLow());
        System.out.println("Highest temperature: " + temperatureAnalyzer.highestTemperature());
        System.out.println("Lowest temperature: " + temperatureAnalyzer.lowestTemperature());
        scanner.close();
    }
}