 class Solution {
    public String multiplyStrings(String s1, String s2) {
        return (new BigInteger(s1)).multiply(new BigInteger(s2)).toString();
    }
}

/* Approach:
 Since the input numbers can be extremely large (larger than the range of int or long),
 we use Java's BigInteger class, which can handle arbitrarily large integers.
 1. Convert both input strings into BigInteger objects.
 2. Use BigInteger's multiply() method to multiply the two numbers.
 3. Convert the product back to a string using toString() and return it.
 This approach avoids integer overflow and works efficiently for very large inputs. Easiest and simplest approch
 */
