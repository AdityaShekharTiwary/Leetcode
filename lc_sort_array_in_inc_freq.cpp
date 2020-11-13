class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        vector<pair<int, int>> A;
        for (auto it : m)
            A.push_back(it);
        sort(A.begin(), A.end(), [&](pair<int, int> a, pair<int, int> b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        });
        vector<int> vect;
        for (auto it : A)
            for (int i = 0; i < it.second; i++)
                vect.push_back(it.first);

        return vect;
    }
};
