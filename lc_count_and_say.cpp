class Solution {
public:
    string countAndSay(int n) {
        if(n==0) return "";
        string res="1";
        while(--n){
            string curr="";
            for(int i=0;i<res.size();i++){
                int cnt=1;
                while(i+1<res.size() && res[i]==res[i+1]){
                    cnt++;
                    i++;
                }
                curr+=to_string(cnt)+res[i];
            }
            res=curr;
        }
        return res;
    }
};