class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int N = arr.size();
        for (int i = 0; i < N; ++i) {
          if (arr[i] == 0 && i + 1 < N) {
            arr.pop_back();
            arr.insert(arr.begin() + i + 1, 0);
            ++i;
          }
        }
      }

};
