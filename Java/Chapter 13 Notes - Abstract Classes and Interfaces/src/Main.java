//Abstract Classes
//Classes become more specific and concrete with each new subclass
//Superclasses should contain common features of its subclasses
//A superclass that is so abstract it cannot be used to create object instances of its own is an Abstract class
//Example:
//The getArea() and getPerimeter() methods in GeometricObject class cannot be implemented in the GeometricObject class,
//as the implementation of the methods depends on the specific type of geometric object. These types of methods are
//called abstract methods. After the methods are defined in GeometricObject, it becomes an abstract class.
//If a subclass of an abstract superclass does not implement all of the abstract methods, the subclass must be
//defined abstract
//  -Abstract methods are method headers without a body
//An abstract class cannot be instantiated using the new operator, but you can still define constructors
//A class that contains abstract methods must be abstract, however it is possible to define an abstract class
//that contains no abstract methods
//In the above case, you cannot create instances of the class using the new operator. This class is used as a base class
//for defining a new subclass
//A subclass can be astract even if its superclass is concrete
//Example:
//  -The Object Java class is concrete, but its subclasses (any Java class created) can be abstract
//Cannot create an instance from an abstract class using the new operator, but an abstract class can be used
//as a data type

//The Abstract Number Class
//The Number class is an abstract superclass for Double, Float, Long, Integer, Short, Byte, BigInteger, and BigDecimal
//The intValue(), longValue(), floatValue(), and doubleValue() methods are defined as abstract methods

//Interfaces: Used to specify common behavior for objects of related or unrelated classes
//To define an interface:
//  public interface InterfaceName {
//      constant declarations:
//      abstract method signatures;
//  }
//Example:
//  public interface Edible {
//      public abstract String howToEat();
//  }
//Interfaces are treated as special classes
//Each interface is compiled into a bytecode file, just like a class
//Cannot create a new instance from an interface using the new operator, but can use an interface the same ways as
//an abstract class
//In Interfaces: All data fields are public final static, and all methods are public abstract
//The above modifiers can be omitted, as they are used in an interface implicitly
//The Default Method: A default method provides a default implementation for the method in the interface
//A class that implements the interface may either use the default implementation for the method or override the
//method with a new implementation

//The Comparable Interface
//Suppose you want to define a method to find the larger of two objects of the same type
//The two objects must be comparable, so common behavior for the objects must be comparable
//Java provides the Comparable Interface for this purpose
//Example:
//  package java.lang;
//  public interface Comparable<E> {
//      public int compareTo(E o);
//  }
//The compareTo method determines the order of this object with the specified object o, and returns a negative integer,
//zero, or a positive integer if this object is less than, equal to, or greater than o
//The Comparable interface is a generic interface, which is replaced by a concrete type whn implementing this interface
//Some classes in Java implement comparable to define a natural order for objects:
//  -Byte    -Double     -String
//  -Short   -Char       -Date
//  -Integer -BigInteger
//  -Long    -BigDecimal
//  - Float  -Calendar

//Generic sort Method
//As all Comparable objects have the compareTo method implemented, the java.util.Arrays.sort(Object[]) method in the
//Java API uses the compareTo method to compare and sorts the objects in the array, provided the objects are instances
//of the Comparable interface
//This sort method requires that the elements in an array are instances of Comparable<E>

//Interface vs. Abstract Classes
//Abstract Class:
//  -Variables: No restrictions
//  -Constructors: invoked by subclasses through constructor chaining
//  -Methods: No restrictions
//Interface:
//  -Variables: All variables must be: public static final
//  -No constructors, an interface cannot be instantiated using the new operator
//  -Methods: May contain public abstract instance methods, public default, and public static methods

//An interface can inherit other interfaces using the extends keyword, which is called a subinterface
//An interface can extend other interfaces, but not classes
//A class can extend its superclass and implement multiple interfaces
//All classes share a single root, the Object class, but there is no single root for interfaces
//Like a class, an interface defines a type, a variable of an interface type can reference any instance
//of the class that implements the interface
//Can use an interface as a data type and cast a variable of an interface type to its subclass, and vice versa

//To use an interface or class:
//Generally, a strong is-a relationship that clearly describes a parent-child relationship should be modeled as a
//class
//Generally, a weak is-a relationship can be modeled using interfaces
//In general, interfaces are preferred over abstract classes, as interfaces can define a common supertype for
//unrelated classes
//Interfaces give you more flexibility than classes because you don't have to make everything fit into one type
//of class
public class Main {
    public static void main(String[] args) {

    }
}