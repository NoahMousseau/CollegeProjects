public class MyStringBuilder2 {
    private char[] characters;
    private int size;
    private int capacity;
    //Constructor
    public MyStringBuilder2(String s) {
        size = s.length();
        capacity = size * 2;
        characters = new char[capacity];
        for (int i = 0; i < size; i++) {
            characters[i] = s.charAt(i);
        }
    }
    //Method to append another MyStringBuilder2 object
    public MyStringBuilder2 append(MyStringBuilder2 s) {
        //Check if appending s exceeds the capacity
        if (size + s.size > capacity) {
            //Increase the capacity
            int newCapacity = (size + s.size) * 2;
            char[] newCharacters = new char[newCapacity];
            //Copy existing characters to the new array
            for (int i = 0; i < size; i++) {
                newCharacters[i] = characters[i];
            }
            characters = newCharacters;
            capacity = newCapacity;
        }
        //Append s characters to this array
        for (int i = 0; i < s.size; i++) {
            characters[size + i] = s.charAt(i);
        }
        //Update size
        size += s.size;
        return this;
    }
    //Method to create a substring
    public MyStringBuilder2 substring(int begin, int end) {
        if (begin < 0 || end > size || begin > end) {
            throw new StringIndexOutOfBoundsException("Invalid substring range");
        }
        char[] subChars = new char[end - begin];
        for (int i = begin; i < end; i++) {
            subChars[i - begin] = characters[i];
        }
        return new MyStringBuilder2(new String(subChars));
    }
    //Getter methods
    public int getSize() {
        return size;
    }
    public int getCapacity() {
        return capacity;
    }
    public String toString() {
        return new String(characters, 0, size);
    }
    //Method to get character at a specific index
    public char charAt(int index) {
        if (index < 0 || index >= size) {
            throw new StringIndexOutOfBoundsException("Index out of bounds");
        }
        return characters[index];
    }
    public static void main(String[] args) {
        MyStringBuilder2 sb1 = new MyStringBuilder2("Hello, ");
        MyStringBuilder2 sb2 = new MyStringBuilder2("world!");
        sb1.append(sb2);
        System.out.println("Combined String: " + sb1.toString());
        System.out.println("Size: " + sb1.getSize());
        System.out.println("Capacity: " + sb1.getCapacity());
        MyStringBuilder2 substring = sb1.substring(0, 5);
        System.out.println("Substring: " + substring.toString());
    }
}