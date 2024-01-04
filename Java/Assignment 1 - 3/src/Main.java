import java.util.*;
public class Main {
    public static void main(String[] args) {
        //Create scanner
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number of seconds: ");
        int seconds = input.nextInt();
        int years;
        int days;
        int hours;
        int minutes;
        //Seconds in a year 31536000
        years = seconds/31536000;
        seconds -= years * 31536000;
        days = seconds/86400;
        seconds -= days * 86400;
        hours = seconds/3600;
        seconds -= hours * 3600;
        minutes = seconds/60;
        seconds -= minutes * 60;
        System.out.println("In " + seconds + " there are: " + years + " years");
        System.out.println("In " + seconds + " there are: " + days + " days");
        System.out.println("In " + seconds + " there are: " + hours + " hours");
        System.out.println("In " + seconds + " there are: " + minutes + " minutes");
        System.out.println("In " + seconds + " there are: " + seconds + " seconds");
    }
}