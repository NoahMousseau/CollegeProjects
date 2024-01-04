class TankerShip extends Ship {
    private String liquidType;
    private double capacityTonnage;
    //Constructor
    public TankerShip(String shipName, String yearBuilt, String liquidType, double capacityTonnage) {
        super(shipName, yearBuilt);
        this.liquidType = liquidType;
        this.capacityTonnage = capacityTonnage;
    }
    //Setter and getter methods
    public void setLiquidType(String newLiquidType) {
        this.liquidType = newLiquidType;
    }
    public void setCapacityTonnage(double newCapacityTonnage) {
        this.capacityTonnage = newCapacityTonnage;
    }
    public String getLiquidType() {
        return liquidType;
    }
    public Double getCapacityTonnage() {
        return capacityTonnage;
    }
    //compareBy override
    @Override
    public int compareBy(Ship other) {
        if (other instanceof TankerShip) {
            TankerShip otherTanker = (TankerShip) other;
            return this.getLiquidType().compareTo(otherTanker.getLiquidType());
        } else {
            return -1; // Handle comparison with other types of ships
        }
    }
    //toString override
    @Override
    public String toString() {
        return super.toString() + "\nType: " + liquidType + "\nCapacity: " + capacityTonnage;
    }
}
