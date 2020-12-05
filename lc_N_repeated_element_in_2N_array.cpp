class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int hash[10000]={0};
        for(int i=0;i<A.size();i++){
            hash[A[i]]++;
        }
        int ans=0;
        for(int i=0;i<A.size();i++){
            if(hash[A[i]]==A.size()/2)
                ans=A[i];
        }
        return ans;
    }
};
