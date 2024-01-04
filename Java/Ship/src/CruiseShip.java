class CruiseShip extends Ship {
    private int maxPassengers;
    //Constructor
    public CruiseShip(String shipName, String yearBuilt, int maxPassengers) {
        super(shipName, yearBuilt);
        this.maxPassengers = maxPassengers;
    }
    //Setter and getter methods
    public void setMaxPassengers(int newMaxPassengers) {
        this.maxPassengers = newMaxPassengers;
    }
    public int getMaxPassengers() {
        return maxPassengers;
    }
    //compareBy override
    @Override
    public int compareBy(Ship other) {
        if (other instanceof CruiseShip) {
            CruiseShip otherCruise = (CruiseShip) other;
            // Sort in descending order
            return Integer.compare(otherCruise.getMaxPassengers(), this.getMaxPassengers());
        } else {
            return -1; // Handle comparison with other types of ships
        }
    }
    //toString override
    @Override
    public String toString() {
        return super.toString() + "\nMaximum passengers: " + maxPassengers;
    }
}
