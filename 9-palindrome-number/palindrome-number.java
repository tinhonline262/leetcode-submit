class Solution {
    public boolean isPalindrome(int x) {
        String stringX = String.valueOf(x);
        int left = 0;
        int right = stringX.length() - 1;
        while (left < right) {
            if (stringX.charAt(left) != stringX.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
}