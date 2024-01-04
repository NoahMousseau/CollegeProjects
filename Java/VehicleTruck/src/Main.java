class Vehicle {
    private String manufacturer;
    private int cylinders;

    public Vehicle() {
        manufacturer = "Unknown";
        cylinders = 0;
    }

    public Vehicle(String manufacturer, int cylinders) {
        this.manufacturer = manufacturer;
        this.cylinders = cylinders;
    }

    @Override
    public String toString() {
        return "Vehicle: manufacturer= " + manufacturer + ", cylinders=" + cylinders;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;

        Vehicle vehicle = (Vehicle) obj;

        if (cylinders != vehicle.cylinders) return false;
        return manufacturer.equals(vehicle.manufacturer);
    }
}

class Truck extends Vehicle {
    private double loadCapacity;

    public Truck() {
        super();
        loadCapacity = 0.0;
    }

    public Truck(String manufacturer, int cylinders, double loadCapacity) {
        super(manufacturer, cylinders);
        this.loadCapacity = loadCapacity;
    }

    @Override
    public String toString() {
        return super.toString() + ", load= " + loadCapacity;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        if (!super.equals(obj)) return false;

        Truck truck = (Truck) obj;

        return Double.compare(truck.loadCapacity, loadCapacity) == 0;
    }
}

public class Main {
    public static void main(String[] args) {
        //Creating class objects
        Truck truck1 = new Truck("Ford", 5, 1.5);
        Truck truck2 = new Truck("Honda", 6, 1.75);
        Truck truck3 = new Truck("Ford", 5, 1.5);
        Truck truck4 = new Truck("Ford", 5, 1.5);
        //Printing truck1 and truck2 objects
        System.out.println(truck1);
        System.out.println(truck2);
        //Testing equals for truck1 and truck 2
        if (truck1.equals(truck2)) {
            System.out.println("truck1 and truck2 are the same");
        } else {
            System.out.println("truck1 and truck2 are not the same");
        }
        //Printing truck3 and truck4 objects
        System.out.println(truck3);
        System.out.println(truck4);
        //Testing equals for truck3 and truck 4
        if (truck3.equals(truck4)) {
            System.out.println("truck3 and truck4 are the same");
        } else {
            System.out.println("truck3 and truck4 are not the same");
        }
    }
}
