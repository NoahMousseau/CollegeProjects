import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

//Test implementation
public class TestHospital {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char choice;
        do {
            System.out.println("Enter patient's ID:");
            int patientID = scanner.nextInt();
            scanner.nextLine(); //Consume newline

            System.out.println("Enter patient's first name:");
            String patientFirstName = scanner.nextLine();

            System.out.println("Enter patient's last name:");
            String patientLastName = scanner.nextLine();

            System.out.println("Enter doctor's first name:");
            String doctorFirstName = scanner.nextLine();

            System.out.println("Enter doctor's last name:");
            String doctorLastName = scanner.nextLine();

            System.out.println("Enter doctor's specialty:");
            String specialty = scanner.nextLine();

            System.out.println("Enter Admit Date (day/month/year):");
            String[] admitDateInput = scanner.nextLine().split("/");
            int admitDay = Integer.parseInt(admitDateInput[0]);
            int admitMonth = Integer.parseInt(admitDateInput[1]);
            int admitYear = Integer.parseInt(admitDateInput[2]);
            Date admitDate = new Date(admitDay, admitMonth, admitYear);

            System.out.println("Enter Discharged Date (day/month/year):");
            String[] dischargeDateInput = scanner.nextLine().split("/");
            int dischargeDay = Integer.parseInt(dischargeDateInput[0]);
            int dischargeMonth = Integer.parseInt(dischargeDateInput[1]);
            int dischargeYear = Integer.parseInt(dischargeDateInput[2]);
            Date dischargeDate = new Date(dischargeDay, dischargeMonth, dischargeYear);

            System.out.println("Enter pharmacy Charges, room Rent, and doctor Fee:");
            double pharmacyCharges = scanner.nextDouble();
            double roomCharges = scanner.nextDouble();
            double doctorFee = scanner.nextDouble();

            //Creating instances of classes
            Doctor doctor = new Doctor(doctorFirstName, doctorLastName, specialty);
            Patient patient = new Patient(patientFirstName, patientLastName, patientID, null, doctor, admitDate, dischargeDate);
            patient.setDateOfBirth(new Date(0, 0, 0)); // Set date of birth here

            //Printing details to console
            System.out.println(patient);
            System.out.println("Pharmacy Charges: $ " + pharmacyCharges);
            System.out.println("Room Charges: $ " + roomCharges);
            System.out.println("Doctor's Fees: $ " + doctorFee);
            System.out.println("______________________________");
            System.out.println("Total Charges: $ " + (pharmacyCharges + roomCharges + doctorFee));

            //Writing details to a file
            String fileName = patientFirstName + patientLastName + ".txt";
            try {
                FileWriter writer = new FileWriter(fileName);
                writer.write(patient.toString() + "\n");
                writer.write("Pharmacy Charges: $ " + pharmacyCharges + "\n");
                writer.write("Room Charges: $ " + roomCharges + "\n");
                writer.write("Doctor's Fees: $ " + doctorFee + "\n");
                writer.write("______________________________\n");
                writer.write("Total Charges: $ " + (pharmacyCharges + roomCharges + doctorFee) + "\n");
                writer.close();
            } catch (IOException e) {
                System.out.println("An error occurred while writing to the file.");
                e.printStackTrace();
            }

            System.out.println("Do you want to continue? Enter 'y' for yes, 'n' for no");
            choice = scanner.next().charAt(0);
            scanner.nextLine(); // Consume newline
        } while (choice == 'y');

        scanner.close();
    }
}