class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int mp[26];
        for(int i=0;i<26;i++){
            mp[i]=INT_MAX;
        }

        for(auto x:A){
            int hash[26]={0};
            for(auto c:x){
                hash[c-'a']++;
            }
            for(int i=0;i<26;i++){
                mp[i]=min(mp[i],hash[i]);
            }
        }
        vector<string>res;
        for(int i=0;i<26;i++){
            while(mp[i]){
                res.push_back(string(1,i+'a'));
                mp[i]--;
            }
        }
        return res;
    }
};
