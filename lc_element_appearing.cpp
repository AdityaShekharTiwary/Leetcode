class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        int k=(n*25)/100;
        int cnt=1,res=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) cnt++;
            else cnt=1;
            if(cnt>k) res=arr[i];
        }
        return res;
    }
};