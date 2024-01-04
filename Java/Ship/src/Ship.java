import java.util.*;

abstract class Ship implements Comparable<Ship> {
    private String shipName;
    private String yearBuilt;
    //Constructor
    public Ship(String shipName, String yearBuilt) {
        this.shipName = shipName;
        this.yearBuilt = yearBuilt;
    }
    //Setter and getter methods
    public void setShipName(String newShipName) {
        this.shipName = newShipName;
    }
    public void setYearBuilt(String newYearBuilt) {
        this.yearBuilt = newYearBuilt;
    }
    public String getShipName() {
        return shipName;
    }
    public String getYearBuilt() {
        return yearBuilt;
    }
    public abstract int compareBy(Ship other);
    //compareTo override
    @Override
    public int compareTo(Ship other) {
        return compareBy(other);
    }
    //toString override
    @Override
    public String toString() {
        return "Name: " + shipName + "\nYear: " + yearBuilt;
    }
}
