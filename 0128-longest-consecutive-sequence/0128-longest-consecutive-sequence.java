
class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> s = new HashSet<>();
        for (int x : nums) s.add(x);
        int max = 0;
        for (int x : s) {
            if (!s.contains(x - 1)) {
                int cur = x, len = 1;
                while (s.contains(++cur)) len++;
                max = Math.max(max, len);
            }
        }
        return max;
    }
}