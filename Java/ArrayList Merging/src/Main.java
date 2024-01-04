import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //Read input for list1
        System.out.print("Enter five integers for list1: ");
        ArrayList<Integer> list1 = readIntegers(input);
        //Read input for list2
        System.out.print("Enter five integers for list2: ");
        ArrayList<Integer> list2 = readIntegers(input);
        //Calculate the union of the two lists
        ArrayList<Integer> unionList = union(list1, list2);
        //Display the merged list
        System.out.print("The combined list is ");
        for (int num : unionList) {
            System.out.print(num + " ");
        }
    }
    //Method to read integers from user input and store them in an ArrayList
    public static ArrayList<Integer> readIntegers(Scanner scanner) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            list.add(scanner.nextInt());
        }
        return list;
    }
    //Method to merge the two ArrayLists
    public static ArrayList<Integer> union(ArrayList<Integer> list1, ArrayList<Integer> list2) {
        ArrayList<Integer> result = new ArrayList<>(list1);
        result.addAll(list2);
        return result;
    }
}