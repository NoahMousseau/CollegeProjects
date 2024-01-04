//Single dimensional arrays
public class Main {
    public static void main(String[] args) {
        //To declare an array, of type int, with size 3, a dynamic array, and assign values
        int[] x = new int[4];
        x[0] = 1;
        x[1] = 2;
        x[2] = 3;
        x[3] = 4;

        //To reference an array and change array values
        int[] y = x;
        y[0] = 100;

        //To declare an array with values, a static array
        int[] z = {1, 2, 3};

        //To print the array
        for(int i = 0; i < x.length; i++) {
            System.out.println(x[i]);
        }

        //To copy an array with a for loop
        int[] a = new int[4];
        for(int i = 0; i < a.length; i++) {
            a[i] = x[i];
        }

        //To copy an array with arraycopy()
        int[] b = new int[4];
        // (source, source starting pos, target, target starting pos, number of elements)
        System.arraycopy(x, 0, b, 0, 4);

        //BinarySearch in java
        //List should be pre-sorted
        int[] list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
        System.out.println("Index is " + java.util.Arrays.binarySearch(list, 11));

    }

    public static int[] arrayCopy(int[] x, int[] y) {
        for(int i = 0; i < x.length; i++) {
            y[i] = x[i];
        }
        return y;
    }
}


