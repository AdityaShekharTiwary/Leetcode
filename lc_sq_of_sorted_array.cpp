class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>B;
        for(int i=0;i<A.size();i++)
        {
            B.push_back(A[i]*A[i]);
        }
        sort(B.begin(),B.end());
        return B;
    }
};
