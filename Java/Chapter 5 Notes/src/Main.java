//Chapter 5 Loops
public class Main {
    public static void main(String[] args) {
        //3 types of loops: while, for, do-while
        //For loop
        System.out.println("For loop:");
        for (int i = 1; i <= 3; i++) {
            System.out.println(i);
        }

        //While loop
        System.out.println("While loop:");
        int flag = 5;
        int count = 1;
        while(count != 5) {
            System.out.println(count);
            count++;
        }

        //Using break
        int sum = 0;
        int number = 0;
        while (number < 200) {
            number++;
            sum += number;
            if (sum >= 100) {
                break; //Break ends the loop and exits
            }
        }
        System.out.println("The number is: " + number);
        System.out.println("The sum is: " + sum);

        //Multiple section for loop
        for (int i = 1, j = 9; i <= 9; i++, j--) {
            System.out.println(i + " " + j);
        }

        //Multiplication table with nested for loops
        // Display the table heading
        System.out.println("           Multiplication Table");
        // Display the number title
        System.out.print("    ");
        for (int j = 1; j <= 9; j++)
            System.out.print("   " + j);
        System.out.println("\n-----------------------------------------");
        // Print table body
        for (int i = 1; i <= 9; i++) {
            System.out.print(i + " | ");
            for (int j = 1; j <= 9; j++) {
                // Display the product and align properly
                System.out.printf("%4d", i * j);
            }
            System.out.println();
        }

    }
}