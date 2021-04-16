class Solution {
public:
    int minOperations(string s) {
        int curr=0,cnt=0;
        string t="",k="";
        for(int i=0;i<(s.size()+1)/2;i++){
            t+='0';
            t+='1';
            k+='1';
            k+='0';
        }
        
        cout<<t<<" "<<k;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) curr++;
            else if(s[i]!=k[i]) cnt++;
        }
        
        return min(curr,cnt);
    }
        
};