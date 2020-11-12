class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int n=A.size();
        int inc=0,dec=0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]<=A[i+1])
                inc++;

            if(A[i]>=A[i+1])
                dec++;
        }
        if(inc==n-1 || dec==n-1)
            return true;
        else
            return false;
    }
};
