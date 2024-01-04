import java.util.Arrays;
//Interface declaration
interface Colorable {
    void howToColor();
}
//GeometricObject declaration
abstract class GeometricObject {
    public abstract double getArea();
}
//Implementation for Colorable
class Square extends GeometricObject implements Colorable {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    public double getSide() {
        return side;
    }

    public void setSide(double side) {
        this.side = side;
    }

    @Override
    public void howToColor() {
        System.out.println("Color all four sides");
    }

    @Override
    public double getArea() {
        return side * side;
    }
}
//Implementation for Circle
class Circle extends GeometricObject {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public double getRadius() {
        return radius;
    }
    public void setRadius(double radius) {
        this.radius = radius;
    }
    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }
}
//Implementation for Rectangle
class Rectangle extends GeometricObject {
    private double width;
    private double height;
    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }
    public double getWidth() {
        return width;
    }
    public void setWidth(double width) {
        this.width = width;
    }
    public double getHeight() {
        return height;
    }
    public void setHeight(double height) {
        this.height = height;
    }
    @Override
    public double getArea() {
        return width * height;
    }
}
//Implementation for ComparableSquare
class ComparableSquare extends Square implements Comparable<ComparableSquare> {

    public ComparableSquare(double side) {
        super(side);
    }

    @Override
    public int compareTo(ComparableSquare other) {
        //Compare Squares based on area
        double thisArea = this.getArea();
        double otherArea = other.getArea();

        if (thisArea < otherArea) {
            return -1;
        } else if (thisArea > otherArea) {
            return 1;
        } else {
            return 0;
        }
    }
}
//Testing
public class TestComparableSquare {
    public static void main(String[] args) {
        ComparableSquare square1 = new ComparableSquare(5.0);
        ComparableSquare square2 = new ComparableSquare(8.0);

        System.out.println("Comparing the areas of two squares for sides 5 and 8");

        //Use compareTo to compare areas
        int result = square1.compareTo(square2);

        if (result < 0) {
            System.out.println("The largest Area is " + square2.getArea());
        } else if (result > 0) {
            System.out.println("The largest Area is " + square1.getArea());
        } else {
            System.out.println("The areas are equal");
        }
    }
}
