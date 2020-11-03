class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int ind=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                swap(A[i],A[ind]);

                ind++;
            }
        }
        return A;
    }
};
