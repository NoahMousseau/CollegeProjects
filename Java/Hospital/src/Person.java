import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
class Person {
    private String firstName;
    private String lastName;
    //Constructor
    public Person(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    //Getter and setter methods
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }
    public void setLastName(String lastName) {
        this.lastName = lastName;
    }
    public String getFirstName() {
        return firstName;
    }
    public String getLastName() {
        return lastName;
    }
    @Override
    public String toString() {
        return firstName + " " + lastName;
    }
}
class Doctor extends Person {
    private String specialty;
    public Doctor(String firstName, String lastName, String specialty) {
        super(firstName, lastName);
        this.specialty = specialty;
    }
    public String getSpecialty() {
        return specialty;
    }
    public void setSpecialty(String newSpecialty) {
        this.specialty = newSpecialty;
    }
    @Override
    public String toString() {
        return super.toString() + " " + specialty;
    }
}
class Bill {
    private int patientID;
    private double pharmacyCharges;
    private double roomCharges;
    private double doctorFee;
    //Constructor
    public Bill(int patientID, double pharmacyCharges, double roomCharges, double doctorFee) {
        this.patientID = patientID;
        this.pharmacyCharges = pharmacyCharges;
        this.roomCharges = roomCharges;
        this.doctorFee = doctorFee;
    }
    //Getter and setter methods
    public void setPatientID(int patientID) {
        this.patientID = patientID;
    }
    public double getPharmacyCharges() {
        return pharmacyCharges;
    }
    public void setPharmacyCharges(double pharmacyCharges) {
        this.pharmacyCharges = pharmacyCharges;
    }
    public double getRoomCharges() {
        return roomCharges;
    }
    public void setRoomCharges(double roomCharges) {
        this.roomCharges = roomCharges;
    }
    public double getDoctorFee() {
        return doctorFee;
    }
    public void setDoctorFee(double doctorFee) {
        this.doctorFee = doctorFee;
    }
    public double getTotalCharges() {
        return pharmacyCharges + roomCharges + doctorFee;
    }
}
class Date {
    private int month;
    private int day;
    private int year;
    //Constructor
    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }
    //Getter and setter methods
    public int getMonth() {
        return month;
    }
    public void setMonth(int month) {
        this.month = month;
    }
    public int getDay() {
        return day;
    }
    public void setDay(int day) {
        this.day = day;
    }
    public int getYear() {
        return year;
    }
    public void setYear(int year) {
        this.year = year;
    }
    @Override
    public String toString() {
        return month + "-" + day + "-" + year;
    }
}
class Patient extends Person {
    private int patientID;
    private Date dateOfBirth;
    private Doctor attendingPhysician;
    private Date admitDate;
    private Date dischargeDate;
    //Constructor
    public Patient(String firstName, String lastName, int patientID, Date dateOfBirth, Doctor attendingPhysician,
                   Date admitDate, Date dischargeDate) {
        super(firstName, lastName);
        this.patientID = patientID;
        this.dateOfBirth = dateOfBirth;
        this.attendingPhysician = attendingPhysician;
        this.admitDate = admitDate;
        this.dischargeDate = dischargeDate;
    }
    //Getter and setter methods
    public void setDateOfBirth(Date dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }
    public int getPatientID() {
        return patientID;
    }
    public Date getDateOfBirth() {
        return dateOfBirth;
    }
    public Doctor getAttendingPhysician() {
        return attendingPhysician;
    }
    public void setAttendingPhysician(Doctor attendingPhysician) {
        this.attendingPhysician = attendingPhysician;
    }
    public Date getAdmitDate() {
        return admitDate;
    }
    public void setPatientID(int newID) {
        this.patientID = newID;
    }
    public void setAdmitDate(Date admitDate) {
        this.admitDate = admitDate;
    }
    public Date getDischargeDate() {
        return dischargeDate;
    }
    public void setDischargeDate(Date dischargeDate) {
        this.dischargeDate = dischargeDate;
    }
    @Override
    public String toString() {
        return "Patient: " + super.toString() + "\nID: " + patientID + "\nAttending Physician: "
                + attendingPhysician + "\nAdmit Date: " + admitDate + "\nDischarge Date: " + dischargeDate;
    }
}