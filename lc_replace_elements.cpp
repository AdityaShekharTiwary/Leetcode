class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        vector<int> res(arr.size());
        int max_sofar = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            res[i] = max_sofar;
            max_sofar = max(arr[i], max_sofar);
        }
        return res;
    }
};
