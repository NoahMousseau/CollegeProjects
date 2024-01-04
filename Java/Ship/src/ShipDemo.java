import java.util.ArrayList;
import java.util.Collections;

public class ShipDemo {
    public static void main(String[] args) {
        ArrayList<Ship> ships = new ArrayList<>();
        //Creating objects of CruiseShip, CargoShip, and TankerShip
        CruiseShip cruise1 = new CruiseShip("Disney Magic1", "1998", 2400);
        CruiseShip cruise2 = new CruiseShip("Disney Magic2", "2002", 2500);
        CruiseShip cruise3 = new CruiseShip("Disney Magic3", "2011", 400);
        CargoShip cargo = new CargoShip("Black Pearl", "1800", 50000);
        TankerShip tanker = new TankerShip("Lolipop", "1960", "Oil", 500000.0);
        //Adding objects to the ArrayList
        ships.add(cruise1);
        ships.add(cruise2);
        ships.add(cruise3);
        ships.add(cargo);
        ships.add(tanker);
        //Printing objects before sorting
        System.out.println("Before sorting three objects of CruiseShip:");
        for (int i = 0; i < 3; i++) {
            System.out.println("[" + (i + 1) + "] " + ships.get(i));
        }
        //Sorting the ArrayList
        Collections.sort(ships);
        //Printing objects after sorting
        System.out.println("\nAfter sorting three objects of CruiseShip:");
        for (Ship ship : ships) {
            System.out.println(ship);
        }
    }
}
