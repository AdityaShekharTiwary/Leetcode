class Solution {
public:
    int longestSubstring(string s, int k) {
        return helper(s, 0, s.size(), k);
    }

    int helper(string s, int start, int end, int k) {
        if (end - start < k) return 0;

        vector<int> arr(26);
        for (int i = start; i < end; i++) {
            arr[s[i] - 'a']++;
        }

        for (int i = start; i < end; i++) {
            if (arr[s[i] - 'a'] < k) {
                int j = i + 1;

                while (j < end && arr[s[i] - 'a'] >= k) j++;

                return max(helper(s, start, i, k), helper(s, j, end, k));
            }
        }
        return end - start;
    }
};