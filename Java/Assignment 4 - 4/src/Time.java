public class Time {
    private int hour;
    private int minute;
    private int second;
    //No-arg constructor for current time
    public Time() {
        double currentTimeMillis = System.currentTimeMillis();
        setTime(currentTimeMillis);
    }
    //Constructor for time since January 1, 1970
    public Time(double elapseTime) {
        setTime(elapseTime);
    }
    //Constructor for specified hour, minute, and second
    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    //Getter methods
    public int getHour() {
        return hour;
    }
    public int getMinute() {
        return minute;
    }
    public int getSecond() {
        return second;
    }
    // Method to set time based on time in milliseconds
    public void setTime(double elapseTime) {
        // Calculate seconds, minutes, and hours from milliseconds
        double totalSeconds = elapseTime / 1000;
        second = (int) (totalSeconds % 60);
        double totalMinutes = totalSeconds / 60;
        minute = (int) (totalMinutes % 60);
        double totalHours = totalMinutes / 60;
        hour = (int) (totalHours % 24);
    }
    //Test class implementation
    public static void main(String[] args) {
        Time currentTime = new Time();
        Time elapsedTime = new Time(555550000);
        Time customTime = new Time(5, 23, 55);

        System.out.println(currentTime.getHour() + ":" + currentTime.getMinute() + ":" + currentTime.getSecond());
        System.out.println(elapsedTime.getHour() + ":" + elapsedTime.getMinute() + ":" + elapsedTime.getSecond());
        System.out.println(customTime.getHour() + ":" + customTime.getMinute() + ":" + customTime.getSecond());
    }
}
