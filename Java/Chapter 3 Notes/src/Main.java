//Chapter 3: Selections
public class Main {
    public static void main(String[] args) {
        //In java, booleans only exist as true/false, not 1/0
        boolean x = true;
        boolean y = false;
        //Boolean operators, < <= > >= == !=
        boolean b = (1>2); //Stores value of false in b
        //if-else
        int i = 1;
        int j = 2;
        int k = 3;
        if (i > j) {
            if (i > k) {
                System.out.println("A");
            }
        } else {
            System.out.println("B");
        }

        //Generating random numbers
        int l = (int)(Math.random() * 10); //Assigns l a value between 0 and 9
        double m = (Math.random()); //Assigns m a value between 0 and 1
        System.out.println(l);
        System.out.println(m);
        //Logical operators, ! (not), & (test left operator first), && (and), || (or), ^ (exclusive)

        
    }
}