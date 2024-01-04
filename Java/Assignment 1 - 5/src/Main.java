import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double c1centerX;
        double c1centerY;
        double c1Radius;
        double c2centerX;
        double c2centerY;
        double c2Radius;
        double distance;
        boolean inside = false;
        boolean overlap = false;
        System.out.print("Enter circle1's center, x-, y-coordinates, and radius: ");
        c1centerX = input.nextDouble();
        c1centerY = input.nextDouble();
        c1Radius = input.nextDouble();
        System.out.print("Enter circle2's center, x-, y-coordinates, and radius: ");
        c2centerX = input.nextDouble();
        c2centerY = input.nextDouble();
        c2Radius = input.nextDouble();
        double cXMinus = c2centerX - c1centerX;
        double cYMinus = c2centerY - c1centerY;
        //Distance formula
        distance = Math.sqrt((cXMinus * cXMinus) + (cYMinus * cYMinus));
        if (distance <= c1Radius - c2Radius) {
            inside = true;
            System.out.println("circle2 is inside circle1");
        } else if (distance <= c1Radius + c2Radius) {
            overlap = true;
            System.out.println("circle2 overlaps circle1");
        } else {
            System.out.println("circle2 does not overlap circle1");
        }
    }
}