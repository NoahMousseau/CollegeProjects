//Association, Aggregation, Composition, Inheritance
//Associations: a general binary relationship that describes an activity between two classes
//Example, if 3 classes, 2 are associated with Course class:  Student --> Course <-- Faculty
//Aggregation: represents an ownership relationship between two objects
//  -The owner object is called an aggregating object, its class an aggregating class
//  -The subject object is called an aggregated object, and its class an aggregated class
//Example: Name (aggregated class), Student (aggregating class), Address (aggregated class)

//Superclasses and Subclasses
//Inheritance allows to be able to define a general class and extend it to more specialized classes
//The specialized class inherits the properties and methods from the general class

//In Java, a class C1 extended from another class C2 is called a subclass, and C2 the superclass
//Superclass: parent class, base class, extended class, base class
//A subclass and its superclass are said to be an is-a relationship
//Example:
//A superclass called GeometricObject
//Two subclasses called Circle and Rectangle
//The rectangle extends the GeometricObject class by using:
//  public class Rectangle extends GeometricObject
//The keyword extends tells the compiler the Rectangle class extends the GeometricObject class
//So the Rectangle class inherits the methods: getColor, setColor, isFilled, setFilled, and toString

//The keyword: super
//Refers to the superclass of the class in which super appears
//Can be used in two ways:
//  -To call a superclass constructor
//  -To call a superclass method

//Superclass Constructor
//Superclass constructors are not inherited in the subclass
//The superclass constructor can be invoked explicitly or implicitly
//  -Explicitly: invoked from subclass' constructors, using the keyword super() or super(arguments)
//      *Must use keyword super, and the call must be the first statement in the constructor
//  -If the keyword super is not used, the superclass's no -arg constructor is automatically invoked

//Superclass's Constructor is Always Invoked
//  -A constructor may invoke its superclass's constructor
//  -If superclass's constructor is not invoked explicitly, the compiler puts super()
//   as the first statement in the constructor
//If a class is designed to be extended, it is better to provide a no-arg constructor to avoid errors

//A subclass inherits from a superclass, you can also:
//  -Add new properties
//  -Add new methods
//  -Override methods of the superclass
//The keyword super can also be used to reference a method other than the constructor in the superclass
//A sublcass inherits methods from a superclass, which can be modified through method overriding
//To override a method, the method in the subclass must use the same signature and return type as the method
//in the superclass
//  -An instance method can be overridden only if it is accessible
//  -A private method cannot be overridden
//  -If a method defined in a subclass is private, the two methods are unrelated
//  -A static method can be inherited, but not overridden
//  -If a static method in the superclass is redefined in the subclass, the method in the superclass is hidden
//  -A subclass may override a protected method defined in its superclass and change its visibility to public
//  -A subclass cannot weaken the accessibility of a method defined in the superclass
//  -If a method is defined as public in the superclass, it must be defined as public in the subclass

//To simplify:
//Overriding uses the same method name and arguments
//Overloading uses the same method name, but different arguments

//You can use @Override declaration in subclasses before the method you wish to override

//Every class in Java is descended from the java.lang.Object class
//If no inheritance is specified when a class is defined, the superclass of the class is Object

//toString() method in Object
//Returns a string representation of the object
//Usually overridden to return an understandable representation of the object

//Polymorphism
//  -Every instance of a subclass is also an instance of its superclass, but not vice versa
//  -Able to pass an instance of a subclass to a parameter of its superclass type
//  -Polymorphism means that a variable of a supertype can refer to a subtype object

//Method Matching vs Binding
//Matching a method signature, and binding a method implementation are two separate concepts
//The declared type of the reference variable decides which method to match at compile time
//The compiler finds a method matching according to parameter type, number of parameters, and order of
//parameters at compile time
//A method may be implemented in several classes along the inheritance chain. The JVM binds the implementation
//of the method at runtime, decided by the actual type of the variable

//Casting Objects: Converting an object of one class type to another within an inheritance hierarchy
//If: m(newStudent()) would assign the object new Student() to a parameter of the Object type
//This is equivalent to:
//Object o = new Student(); //Implicit casting
//m(o);
//Cannot do the reverse, Student b = o would not work, as a Student object is always an instance of Object, but
//an object is not necessarily an instance of Student
//To tell the compiler that o is a Student object, use explicit casting
//Student b = (Student)o; //Explicit casting
//Casting an object reference does not create a new object
//As in:
//Object o = new Circle();
//Circle c = (Circle)o; //No new object is created
//In the above instance, reference variables o and c point to the same object
//For casting to work, must be sure the object to be cast is an instance of the subclass
//If the superclass object is not an instance of the subclass, a runtime ClassCastException error occurs

//instanceof Operator: can be used to test whether an object is an instance of a class
//equals Object Method: compares the contents of two objects, checks if two reference variable point to the same
//                      object using the == operator
//The equals method should be overridden two test whether two objects are equal dependent on different criteria
//ArrayList class: can be used to store objects, has an unlimited amount of elements that can be stored
//Cannot use a primitive data type to be stored in ArrayList, must be objects

//protected Modifier: Makes the affected data or method able to be accessed by any class in the same
//                    package or subclasses, even if subclasses are in a different package
//A subclass cannot weaken accessibility, only override a protected method in the superclass to public
//A method defined as public in the superclass must be defined as public in the subclass as well
//The final Modifier
//A final local variable is a constant inside a method
//  -The final class cannot be extended
//  -The final variable is a constant
//  -The final method cannot be overridden by its subclasses



public class Main {
    public static void main(String[] args) {

    }
}