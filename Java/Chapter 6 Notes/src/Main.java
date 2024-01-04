public class Main {
    public static void main(String[] args) {
        fs(5);
        System.out.println("Returning greater: " + ri(5, 6));
    }
    //Creating methods
    //Using public in method declaration
    public static void fs(int x) {
        x++;
        System.out.println(x);
    }
    //Using just static
    static void f(int x) {
        x++;
        System.out.println(x);
    }
    //Returning
    static int ri(int x, int y) {
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        } else {
            return x;
        }
    }
    //Overloading
    static int compare(int i) {
        return i;
    }
    //Can overload by changing number of parameters
    //Can overload by changing position of parameter syntax
    //Can overload by changing datatype of parameter
    static double compare(int i, int j) {
        return i + j;
    }
}