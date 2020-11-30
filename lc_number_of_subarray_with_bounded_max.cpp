class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int n=A.size();
        int count=0,s=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(A[i]>R){
                count=0;
                s=0;
                continue;
            }
            count++;
            if(A[i]>=L && A[i]<=R){
                res+=count;
                s=count;
                continue;
            }
            res+=s;
        }
        return res;
    }
};
