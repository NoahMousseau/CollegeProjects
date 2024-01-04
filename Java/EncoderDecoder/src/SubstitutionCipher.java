//SubstitutionCipher implementation
public class SubstitutionCipher extends Cipher implements MessageEncoder, MessageDecoder {
    private int shift;
    //Constructor
    public SubstitutionCipher(int shift) {
        this.shift = shift;
    }
    //cipherType override
    @Override
    public String cipherType() {
        return "SubstitutionCipher-shift amount = " + shift;
    }
    //encode override
    @Override
    public String encode(String plainText) {
        return shiftText(plainText, shift);
    }
    //decode override
    @Override
    public String decode(String cipherText) {
        return shiftText(cipherText, -shift);

    }
    //Private method used for encoding and decoding SubstitutionCipher
    private String shiftText(String text, int shiftAmount) {
        StringBuilder result = new StringBuilder();
        for (char ch : text.toCharArray()) {
            if (Character.isLetter(ch)) {
                char base = Character.isUpperCase(ch) ? 'A' : 'a';
                char shifted = (char) (((ch - base + shiftAmount + 26) % 26) + base);
                result.append(shifted);
            } else {
                result.append(ch); //Non-alphabetic characters remain unchanged
            }
        }
        return result.toString();
    }
}
