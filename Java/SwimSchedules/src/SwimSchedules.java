import java.util.*;
public class SwimSchedules {
    public static int[][] jeffSchedule = {
            {1, 1, 0 ,0},
            {0, 1, 1, 1},
            {0, 1, 1, 0},
            {1, 1, 1, 0}
    };
    public static int[][] annaSchedule = {
            {1, 1, 0, 1},
            {0, 1, 0, 1},
            {1, 1, 0, 0},
            {1, 0, 1, 1}
    };
    public static int[][] indLessons = {
            {1, 0, 1, 0},
            {1, 0, 1, 0},
            {1, 0, 1, 1},
            {0, 1, 0, 1}
    };
    public static int[][] groupLessons = {
            {0, 0, 1, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 1},
            {0, 0, 0, 0}
    };
    public static void program() {
        int continueProgram = 1;
        while (continueProgram == 1) {
            continueProgram = printMenu();
        }
    }
    public static int printMenu() {
        System.out.println("Enter one of the following commands:");
        System.out.println("p - Print schedules");
        System.out.println("s - Schedule a slot");
        System.out.println("f - Free a slot");
        System.out.println("i - Show slots available for individual lessons");
        System.out.println("g - Show slots available for group lessons");
        System.out.println("q - Quit");
        Scanner input = new Scanner(System.in);
        char userInput = (input.nextLine()).charAt(0);
        int selectInput;
        //Match case statements for menu
        switch (userInput) {
            case 'p':
                printSchedules();
                return 1;
            case 's':
                System.out.println("Select instructor (1 - Jeff, 2 - Anna):");
                selectInput = input.nextInt();
                if (selectInput == 1) {
                    scheduleSlot(jeffSchedule);
                } else {
                    scheduleSlot(annaSchedule);
                }
                return 1;
            case 'f':
                System.out.println("Select instructor (1 - Jeff, 2 - Anna):");
                selectInput = input.nextInt();
                if (selectInput == 1) {
                    freeSlot(jeffSchedule);
                } else {
                    freeSlot(annaSchedule);
                }
                return 1;
            case 'i':
                showIndividualLessonSlots();
                return 1;
            case 'g':
                showGroupLessonSlots();
                return 1;
            case 'q':
                return 0;
            default:
                return 1;
        }
    }
    //Printing schedules
    public static void printSchedules() {
        System.out.println("Jeff:");
        System.out.println("      Mon Tue Wed Thu");
        String[] timeSlots = {"11-12","12-1 ","1-2  ","2-3  "};
        //Print jeff schedule
        for (int i = 0; i < jeffSchedule.length; i++) {
            System.out.print(timeSlots[i] + " ");
            for (int j = 0; j < jeffSchedule[i].length; j++) {
                if (jeffSchedule[i][j] == 1) {
                    System.out.print("X   ");
                } else {
                    System.out.print("_   ");
                }
            }
            System.out.println();
        }
        //Empty line break
        System.out.println("");
        //Print anna schedule
        System.out.println("Anna:");
        System.out.println("      Mon Tue Wed Thu");
        for (int i = 0; i < annaSchedule.length; i++) {
            System.out.print(timeSlots[i] + " ");
            for (int j = 0; j < annaSchedule[i].length; j++) {
                if (annaSchedule[i][j] == 1) {
                    System.out.print("X   ");
                } else {
                    System.out.print("_   ");
                }
            }
            System.out.println();
        }
    }
    //Slot scheduling
    public static void scheduleSlot(int[][] schedule) {
        Scanner input = new Scanner(System.in);
        System.out.println("Select Day (1 - Mon, 2 - Tue, 3 - Wed, 4 - Thu): ");
        int dayIndex = input.nextInt() - 1;
        System.out.println("Select Slot (1 - 11-12, 2 - 12-1, 3 - 1-2, 4 - 2-3): ");
        int timeSlotIndex = input.nextInt() - 1;
        //Check if the slot is available, if yes, schedule it
        if (dayIndex != -1 && timeSlotIndex != -1 && schedule[timeSlotIndex][dayIndex] == 0) {
            schedule[timeSlotIndex][dayIndex] = 1;
            System.out.println("Slot scheduled");
        } else {
            System.out.println("Invalid input");
        }
    }
    //Free slot
    public static void freeSlot(int[][] schedule) {
        Scanner input = new Scanner(System.in);
        System.out.println("Select Day (1 - Mon, 2 - Tue, 3 - Wed, 4 - Thu): ");
        int dayIndex = input.nextInt() - 1;
        System.out.println("Select Slot (1 - 11-12, 2 - 12-1, 3 - 1-2, 4 - 2-3): ");
        int timeSlotIndex = input.nextInt() - 1;
        //Check if the slot is already scheduled, if yes, free it
        if (dayIndex != -1 && timeSlotIndex != -1 && schedule[timeSlotIndex][dayIndex] == 1) {
            schedule[timeSlotIndex][dayIndex] = 0;
            System.out.println("Slot freed");
        } else {
            System.out.println("Invalid input");
        }
    }
    //Print individual lesson slots
    public static void showIndividualLessonSlots() {
        System.out.println("Individual Lesson Slots:");
        System.out.println("      Mon Tue Wed Thu");
        String[] timeSlots = {"11-12","12-1 ","1-2  ","2-3  "};
        //Iterate over the individual lessons schedule and print available slots
        for (int i = 0; i < indLessons.length; i++) {
            System.out.print(timeSlots[i] + " ");
            for (int j = 0; j < indLessons[i].length; j++) {
                if (indLessons[i][j] == 1) {
                    System.out.print("I   ");
                } else {
                    System.out.print("_   ");
                }
            }
            System.out.println();
        }
    }
    //Print group lesson slots
    public static void showGroupLessonSlots() {
        System.out.println("Group Lesson Slots:");
        System.out.println("      Mon Tue Wed Thu");
        String[] timeSlots = {"11-12","12-1 ","1-2  ","2-3  "};
        //Iterate over the group lessons schedule and print available slots
        for (int i = 0; i < groupLessons.length; i++) {
            System.out.print(timeSlots[i] + " ");
            for (int j = 0; j < groupLessons[i].length; j++) {
                if (groupLessons[i][j] == 1) {
                    System.out.print("G   ");
                } else {
                    System.out.print("_   ");
                }
            }
            System.out.println();
        }
    }
    //Testing
    public static void main(String args[]) {
        program();
    }
}
