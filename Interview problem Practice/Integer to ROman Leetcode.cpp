//The code is in JAVA
class Solution {
    public String intToRoman(int num) {
        StringBuilder s = new StringBuilder();

        // Define Roman numeral values and symbols in descending order
        int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        // Iterate through the values and symbols
        for (int i = 0; i < values.length; i++) {
            while (num >= values[i]) {
                s.append(symbols[i]);
                num -= values[i]; // Decrement num by the current Roman numeral's value
            }
        }

        return s.toString();
    }
}

