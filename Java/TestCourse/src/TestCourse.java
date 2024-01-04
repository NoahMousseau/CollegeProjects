public class TestCourse {
    public static void main(String[] args) {
        int doContinue = 1;
        Course course = new Course("Computer Science");
        //Test addStudent method
        course.addStudent("Alice");
        course.addStudent("Bob");
        course.addStudent("Charlie");
        //Get number of students in course
        System.out.println("Number of students in course: " + course.getNumberOfStudents());
        String[] temp = course.getStudents();
        //Print students in class
        for (int i = 0; i < course.getNumberOfStudents(); i++) {
            System.out.print(temp[i] + " ");
        }
        //Line break
        System.out.println("");
        course.addStudent("Albert");
        course.addStudent("Johnson");
        System.out.println("After adding Albert and Johnson:");
        System.out.println("Number of students in course: " + course.getNumberOfStudents());
        temp = course.getStudents();
        for (int i = 0; i < course.getNumberOfStudents(); i++) {
            System.out.print(temp[i] + " ");
        }
        System.out.println("");
        //Testing dropStudent method
        course.dropStudent("Albert");
        System.out.println("After dropping Albert:");
        System.out.println("Number of students in course: " + course.getNumberOfStudents());
        temp = course.getStudents();
        for (int i = 0; i < course.getNumberOfStudents(); i++) {
            System.out.print(temp[i] + " ");
        }
    }

    public static class Course {
        private String courseName;
        private String[] students = new String[3];
        private int numberOfStudents;

        public Course(String courseName) {
            this.courseName = courseName;
        }

        public String getCourseName() {
            return courseName;
        }

        public int getNumberOfStudents() {
            return numberOfStudents;
        }

        //Revise the getStudents method to return an array whose length is the same
        //as the number of students in the course.
        public String[] getStudents() {
            String[] newStudents = new String[numberOfStudents];
            for (int i = 0; i < numberOfStudents; i++) {
                newStudents[i] = students[i];
            }
            return newStudents;
        }


        //Revise the addStudent method to automatically increase the array size
        public void addStudent(String student) {
            //Check if student array is full
            if (students.length == numberOfStudents) {
                //Create temp array to hold new student
                String[] newStudents = new String[numberOfStudents + 1];
                //Iterate through student array and assign values into newStudents
                for (int i = 0; i < numberOfStudents; i++) {
                    newStudents[i] = students[i];
                }
                //Add new student to newStudents array
                newStudents[numberOfStudents] = student;
                //Increment numberOfStudents
                numberOfStudents++;
                //Assign students array reference to newStudents
                students = newStudents;
                //If students array is not full
            } else {
                students[numberOfStudents] = student;
                numberOfStudents++;
            }
        }
        //Implement the dropStudent method.
        public void dropStudent(String student) {
            int rIndex = -1;
            // Iterate through students array to find the index of the student to remove
            for (int i = 0; i < numberOfStudents; i++) {
                if (students[i].equals(student)) {
                    rIndex = i;
                    break;
                }
            }
            if (rIndex == -1) {
                System.out.println("Student name " + student + " not in array");
            } else {
                String[] tempStudents = new String[numberOfStudents - 1];
                // Copy students before the removed student into tempStudents
                for (int i = 0; i < rIndex; i++) {
                    tempStudents[i] = students[i];
                }
                // Copy students after the removed student into tempStudents
                for (int i = rIndex; i < numberOfStudents - 1; i++) {
                    tempStudents[i] = students[i + 1];
                }
                // Decrement numberOfStudents
                numberOfStudents--;
                // Set students array reference to tempStudents
                students = tempStudents;
            }
        }
    }
}