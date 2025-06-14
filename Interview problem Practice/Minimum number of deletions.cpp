//java
class Solution
{
    int minDeletions(String str, int n)
    {
        return minDel(str, 0, n - 1);
    }
    private int minDel(String str, int left, int right) {

        if (left >= right) {
            return 0;
        }

        if (str.charAt(left) == str.charAt(right)) {
            return minDel(str, left + 1, right - 1);
        }

       int delLeft = minDel(str, left + 1, right);
        int delRight = minDel(str, left, right - 1);

        return 1 + Math.min(delLeft, delRight);
    }
}

