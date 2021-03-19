class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        string t=s;
        sort(t.begin(),t.end());
        reverse(t.begin(),t.end());
        // cout<<t<<endl;
        for(int i=0;i<n-1;i++){
           // cout<<s[i]<<" "<<t[i]<<endl;
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};