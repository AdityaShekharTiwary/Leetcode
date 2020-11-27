class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int ans=0,sum=0;
        int n=A.size();
        unordered_map<int,int>m;
        m.insert({0,1});
        for(int i=0;i<n;++i){
            sum+=A[i];
            int rem=sum%K;
            if(rem<0) rem+=K;
            if(m.count(rem)) ans+=m[rem];
            m[rem]++;
        }
        return ans;
    }
};
