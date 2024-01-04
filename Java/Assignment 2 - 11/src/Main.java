//Noah Mousseau
public class Main {
    public static void main(String[] args) {
        //Triangle left oriented
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        System.out.println();
        //Triangle left oriented upside down
        for (int i = 6; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        System.out.println();
        //Triangle right oriented
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 6 - i; j++) {
                System.out.print("  "); // Print spaces to shift the numbers
            }
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        System.out.println();
        //Triangle right oriented upside down
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= i - 1; j++) {
                System.out.print("  "); // Print spaces to shift the numbers
            }
            for (int j = 1; j <= 6 - i + 1; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}