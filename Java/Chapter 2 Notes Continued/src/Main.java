public class Main {
    public static void main(String[] args) {
        //Numeric type conversion
        byte i = 100;
        long k = i * 3 + 4; //Implicit conversion from int to long
        double d = i * 3.1 + k / 2; //Implicit conversion from byte 'i' to double and int '2' to long
        System.out.println("Variable k, after numeric conversion from i and k: " + d);

        //Type casting
        double e = 3; //Implicit casting
        int j = (int)3.0; //Explicit casting
        //int x = 5/2.0; gives a syntax error, as double of 2.0 has a higher range than int
        double f = 4.5;
        int l = (int)f; //l becomes 4, f remains 4.5
        //Integer overflow occurs after 2147483647, after +1, will be -2147483647
        System.out.println(1.0-0.1-0.1-0.1-0.1-0.1); //Round-off error, gives 0.5000...1, not 0.5
    }
}