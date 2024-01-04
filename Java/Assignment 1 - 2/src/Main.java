public class Main {
    public static void main(String[] args) {
        int current = 312032486;
        //Assuming 31536000 seconds in a year of 365 days
        int birthsPerYear = 4505143;
        int deathsPerYear = 2425846;
        int immigrantsPerYear = 700800;
        for (int i = 1; i<6; i++) {
            current -= deathsPerYear;
            current += birthsPerYear + immigrantsPerYear;
            System.out.println("Year" + i +": " + current);
        }
    }
}