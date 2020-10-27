class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int highest = 0;
        int secondHighest = 0;

        for (auto num : nums) {
            if (num > highest) {
                if (highest > secondHighest) {
                    secondHighest = highest;
                }
                highest = num;
            }
            else if (num > secondHighest) {
                secondHighest = num;
            }
        }

        return (highest - 1) * (secondHighest - 1);
    }
};
