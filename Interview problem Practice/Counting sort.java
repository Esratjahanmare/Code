public class Counting_sort
{
    public static String countSort(String arr)
    {
        int[] count = new int[26];  
        
        for (char ch : arr.toCharArray()) {
            count[ch - 'a']++;
        }

        StringBuilder sortedStr = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                sortedStr.append((char) (i + 'a'));
                count[i]--;
            }
        }

        return sortedStr.toString();
    }
}