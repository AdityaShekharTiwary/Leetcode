class Solution {
public:
    
    string solve(string str){
        int n=str.size(),cnt=0;
        string res="";
        for(int i=n-1;i>=0;i--){
            if(str[i]=='#') cnt++;
            else if(cnt>0) cnt--;
            else res+=str[i];
        }
        return res;
    }
    
    bool backspaceCompare(string S, string T) {
        return solve(S)==solve(T);
    }
};