//ShuffleCipher implementation
public class ShuffleCipher extends Cipher implements MessageEncoder, MessageDecoder {
    private int shuffleAmount;
    //Constructor
    public ShuffleCipher(int shuffleAmount) {
        this.shuffleAmount = shuffleAmount;
    }
    //cipherType override
    @Override
    public String cipherType() {
        return "ShuffleCipher-shuffle amount = " + shuffleAmount;
    }
    //encode override
    @Override
    public String encode(String plainText) {
        String shuffledText = plainText;
        for (int i = 0; i < shuffleAmount; i++) {
            shuffledText = shuffleTextOnce(shuffledText);
        }
        return shuffledText;
    }
    //decode override
    @Override
    public String decode(String cipherText) {
        //Decoding is the same as encoding
        return encode(cipherText);
    }
    //Private method used for encoding and decoding
    private String shuffleTextOnce(String text) {
        int mid = text.length() / 2;
        StringBuilder shuffled = new StringBuilder();

        String firstHalf = text.substring(0, mid);
        String secondHalf = text.substring(mid);

        for (int i = 0; i < Math.max(firstHalf.length(), secondHalf.length()); i++) {
            if (i < firstHalf.length()) {
                shuffled.append(firstHalf.charAt(i));
            }
            if (i < secondHalf.length()) {
                shuffled.append(secondHalf.charAt(i));
            }
        }
        return shuffled.toString();
    }
}
