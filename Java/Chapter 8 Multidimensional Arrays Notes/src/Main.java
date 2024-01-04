//Multidimensional Arrays
public class Main {
    public static void main(String[] args) {
        //Creating a 2 dimensional array
        //Use 2 sets of brackets, rows and columns
        int[][] table;
        //Rows, columns
        table = new int[2][4];
        //2 loops, one to control rows and one to control columns
        for (int r = 0; r < table.length; r++) {
            for (int c = 0; c < table[r].length; c++) {
                table[r][c] = (int)(Math.random() *1000);
            }
        }
        //Can also create and declare elements at once
        int[][] decArray = {
                {1, 2, 3},   //decArray[0].length
                {4, 5, 6},   //decArray[1].length
                {7, 8, 9},   //decArray[2].length
                {10, 11, 12} //decArray[3].length
                             //decArray[4].length gives ArrayIndexOutOfBoundsException
        };
        //Can also declare size of array with declaration
        //Creates an array with 3 rows and 4 columns
        int[][] sizeArrayDec = new int[3][4];
        //A ragged array is an array with a different number of columns in each row
        int[][] raggedArray = {  //raggedArray.length is 5, 5 rows
                {1, 2, 3, 4, 5}, //raggedArray.length is 5
                {2, 3, 4, 5},    //raggedArray.length is 4
                {3, 4, 5},       //raggedArray.length is 3
                {4, 5},          //raggedArray.length is 2
                {5}              //raggedArray.length is 1
        };
        //To print an array:
        for (int row = 0; row < table.length; row++) {
            System.out.print("[ ");
            for (int column = 0; column < table[0].length; column++) {
                System.out.print(table[row][column] + " ");
            }
            System.out.println("]");
        }
    }
}