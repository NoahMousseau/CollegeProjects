import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        BigInteger currentNumber = new BigInteger(Long.MAX_VALUE + "").add(BigInteger.ONE);
        int count = 0;
        while (count < 25) {
            if (currentNumber.mod(BigInteger.valueOf(3)).equals(BigInteger.ZERO) &&
                    currentNumber.mod(BigInteger.valueOf(5)).equals(BigInteger.ZERO)) {
                System.out.print(currentNumber + " ");
                count++;
                if (count % 5 == 0) {
                    System.out.println();
                }
            }
            currentNumber = currentNumber.add(BigInteger.ONE);
        }
    }
}