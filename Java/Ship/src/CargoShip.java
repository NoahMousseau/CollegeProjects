class CargoShip extends Ship {
    private int shipCapacity;
    //Constructor
    public CargoShip(String shipName, String yearBuilt, int shipCapacity) {
        super(shipName, yearBuilt);
        this.shipCapacity = shipCapacity;
    }

    //Setter and getter methods
    public void setShipCapacity(int newShipCapacity) {
        this.shipCapacity = newShipCapacity;
    }
    public int getShipCapacity() {
        return shipCapacity;
    }
    //compareBy override
    @Override
    public int compareBy(Ship other) {
        if (other instanceof CargoShip) {
            CargoShip otherCargo = (CargoShip) other;
            return Integer.compare(this.getShipCapacity(), otherCargo.getShipCapacity());
        } else {
            return -1; // Handle comparison with other types of ships
        }
    }
    //toString override
    @Override
    public String toString() {
        return super.toString() + "\nCargo capacity: " + shipCapacity + " tons";
    }
}
