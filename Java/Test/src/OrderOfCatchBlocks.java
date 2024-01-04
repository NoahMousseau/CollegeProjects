//Super and sub class ordering testing
class SuperClassException extends Exception {
    public SuperClassException(String message) {
        super(message);
    }
}
class SubClassException extends SuperClassException {
    public SubClassException(String message) {
        super(message);
    }
}
//Main for testing
public class OrderOfCatchBlocks {
    public static void main(String[] args) {
        try {
            // Some code that may throw exceptions
            throw new SubClassException("This is SubClassException");
        } catch (SuperClassException ex) {
            System.out.println("Caught SuperClassException: " + ex.getMessage());
        } catch (SubClassException ex) { // Error: Unreachable catch block for SubClassException
            System.out.println("Caught SubClassException: " + ex.getMessage());
        }
    }
}
