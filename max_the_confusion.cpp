class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size(), cnt = 0;
        int l = 0, r = 0, ans1 = 0, ans2 = 0;
        // Checking for max True
        while (r < n) {
            if (answerKey[r] == 'T') r++;
            else if (answerKey[r] == 'F' && cnt < k) {
                r++;
                cnt++;
            }
            else if (answerKey[r] == 'F' && cnt >= k) {
                while (cnt == k) {
                    if (answerKey[l] == 'F') cnt--;
                    l++;
                }
            }
            ans1 = max(ans1, r - l);
        }
        l = 0, r = 0, cnt = 0;
        // chechking for max False
        while (r < n) {
            if (answerKey[r] == 'F') r++;
            else if (answerKey[r] == 'T' && cnt < k) {
                r++;
                cnt++;
            }
            else if (answerKey[r] == 'T' && cnt >= k) {
                while (cnt == k) {
                    if (answerKey[l] == 'T') cnt--;
                    l++;
                }
            }
            ans2 = max(ans2, r - l);
        }
        return max(ans1, ans2);
    }
};