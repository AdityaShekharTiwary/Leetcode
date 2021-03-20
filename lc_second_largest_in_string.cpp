class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        set<int> nums;
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9') nums.insert(s[i]-'0');
        }
        vector<int> res;
        for(auto &x:nums) res.push_back(x);
        sort(res.begin(),res.end());
        if(res.size()<2) return -1;
        else return res[res.size()-2];
    } 
};