public class MyInteger {
    private int value;
    //Constructor to assign value to value
    public MyInteger(int value) {
        this.value = value;
    }
    //Getter method
    public int getValue() {
        return value;
    }
    //isEven() method
    public boolean isEven() {
        return value % 2 == 0;
    }
    //isOdd() method
    public boolean isOdd() {
        return value % 2 != 0;
    }
    //isPrime() method
    public boolean isPrime() {
        if (value <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(value); i++) {
            if (value % i == 0) {
                return false;
            }
        }
        return true;
    }
    //equals() method for comparing a specified int value
    public boolean equals(int num) {
        return value == num;
    }
    //equals() method for another MyInteger value
    public boolean equals(MyInteger other) {
        return value == other.value;
    }
    //isEven() method for comparing a given value
    public static boolean isEven(int num) {
        return num % 2 == 0;
    }
    //isOdd() method for comparing a given value
    public static boolean isOdd(int num) {
        return num % 2 != 0;
    }
    //isPrime() method for comparing a given value
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    //isEven() method for checking value of MyInteger object
    public static boolean isEven(MyInteger number) {
        return number.isEven();
    }
    //isOdd() method for checking value of MyInteger object
    public static boolean isOdd(MyInteger number) {
        return number.isOdd();
    }
    //isPrime() method for checking value of MyInteger object
    public static boolean isPrime(MyInteger number) {
        return number.isPrime();
    }
    //parseInt() method to parse array of numeric characters
    public static int parseInt(char[] chars) {
        StringBuilder str = new StringBuilder();
        for (char c : chars) {
            str.append(c);
        }
        return Integer.parseInt(str.toString());
    }
    //parseInt() method to parse a numeric string to an int value
    public static int parseInt(String str) {
        return Integer.parseInt(str);
    }
    //Main method for testing
    public static void main(String[] args) {
        MyInteger n1 = new MyInteger(5);
        MyInteger n2 = new MyInteger(24);
        char[] numericChars = {'3', '5', '3', '9'};
        String numericString = "3539";

        System.out.println("n1 is even? " + n1.isEven());
        System.out.println("n1 is prime? " + n1.isPrime());
        System.out.println("15 is prime? " + MyInteger.isPrime(15));
        System.out.println(MyInteger.parseInt(numericChars));
        System.out.println(MyInteger.parseInt(numericString));
        System.out.println("n2 is odd? " + n2.isOdd());
        System.out.println("45 is odd? " + MyInteger.isOdd(45));
        System.out.println("n1 is equal to n2? " + n1.equals(n2));
        System.out.println("n1 is equal to 5? " + n1.equals(5));
    }
}
