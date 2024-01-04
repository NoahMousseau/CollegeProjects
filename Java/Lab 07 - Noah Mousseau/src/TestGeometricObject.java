import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class TestGeometricObject {
    public static void main(String[] args) {
        GeometricObject[] objectsArray1 = {
                new Circle(5), new Circle(6), new Rectangle(2, 3), new Rectangle(3, 4)
        };

        ArrayList<GeometricObject> objectsList2 = new ArrayList<>(Arrays.asList(
                new Rectangle(10, 20), new Rectangle(20, 30), new Circle(5), new Circle(15)
        ));

        // Before sorting
        System.out.println("Before sorting GeometricObjects list:");
        for (GeometricObject obj : objectsArray1) {
            System.out.print(Math.round(obj.getPerimeter() * 10.0) / 10.0 + " ");
        }
        System.out.println();

        // Sorting
        Arrays.sort(objectsArray1);

        // After sorting
        System.out.println("After sorting GeometricObjects list:");
        for (GeometricObject obj : objectsArray1) {
            System.out.print(Math.round(obj.getPerimeter() * 10.0) / 10.0 + " ");
        }
        System.out.println();

        // Search method
        Rectangle testRectangle = new Rectangle(10, 20);
        Circle testCircle = new Circle(15);
        System.out.println(testRectangle + " is found at index " + search(objectsList2, testRectangle));
        System.out.println(testCircle + " is found at index " + search(objectsList2, testCircle));
    }

    // Search method
    static int search(ArrayList<GeometricObject> list2, GeometricObject element) {
        return list2.indexOf(element);
    }
}
