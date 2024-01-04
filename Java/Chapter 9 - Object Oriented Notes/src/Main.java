//Chapter 9 Notes
//Object Oriented Programming
public class Main {
    public static void main(String[] args) {
        //Creating objects in a single step
        Circle myCircle = new Circle(5);
        //To call an object's method(s)
        System.out.println("Circle area: " + myCircle.getArea());
        //To invoke a static method
        System.out.println("Circle name: " + myCircle.getName());
        //To access a static variable
        System.out.println("Circle radius: " + myCircle.radius);

        Square mySquare = new Square();

        //Creating arrays of objects
        //  -An array of objects is actually an array of reference variables
        Circle[] circleArray = new Circle[10];
        //All circleArray[i], i is currently a reference to a null value, as
        //  no objects have been initialized in the array
        //Creating objects for array:
        for (int i = 0; i < circleArray.length; i++) {
            circleArray[i] = new Circle();
        }
    }
}
//Creating and defining classes
//Used to create reusable classes that create object when constructed
//An object represents an entity that can be distinctly identified
//  -For example, a student, desk, circle, button, etc.
//An object has a unique identity, state, and behaviors
//  -The state of an object consists of a set of data fields, or properties,
//   with their current values
//  -The behavior of an object is defined by a set of methods
//Classes are constructs that define objects of the same type
//  -A class provides variables that represent data fields
//  -A class provides methods to define behaviors
//  -A class has a constructor, which constructs objects from the class
class Circle {
    double radius;
    //The below variable has a default value of null
    //NullPointerException is a common runtime error that occurs when a method is invoked
    //  on a reference variable with a null value
    String x;
    //The below variable is a static variable
    static String name = "A Circle";
    Circle() {
        //Default constructor
        //Also referred to as a 'no-arg constructor'
        radius = 1.0;
    }
    Circle(int newRadius) {
        radius = newRadius;
    }
    //getArea() is an instance method, and can only be used after the instance is created
    double getArea() {
        return radius * radius * 3.14159;
    }
    //getName() is a static method, and can be accessed from a reference variable or from
    //  their class name
    String getName() {
        return name;
    }
}
//Only one class per file can be a public class
//The public class name must be the same as the filename
//When changing references of objects, garbage collection is automatic in java
//Instance variables are tied to a specific instance (a class object)
//Instance variables are not shared between objects of the same class
//  -The data field radius is an instance variable
//Static variables are shared by all instances of a class
//Static variables are not tied to a specific class
class Square {
    //Private modifier restricts access to within a class
    private int length;
    private int width;
    Square() {
        length = 5;
        width = 5;
    }
    Square(int l, int w) {
        length = l;
        width = w;
    }
    //Public modifier enables unrestricted access
    public int getLength() {
        return length;
    }
    public int getWidth() {
        return width;
    }
    public int getArea() {
        return length * width;
    }
}