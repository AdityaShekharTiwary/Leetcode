class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        int hash[2001]={};
        for(int i=0;i<n;i++){
            hash[arr[i]+1000]++;
        }
        sort(begin(hash),end(hash));
        for(int i=1000;i<2001;i++){
            cout<<hash[i]<<" ";
        }
        for(int i=0;i<2001;i++){
            if(hash[i] && hash[i]==hash[i-1])
                return false;
        }
        return true;
    }
};
