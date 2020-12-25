class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();

        char hash_s[128]={0};
        char hash_t[128]={0};

        for(int i=0;i<n;++i){

            if(hash_s[s[i]]!=hash_t[t[i]]) return false;
            hash_s[s[i]]=i+1;
            hash_t[t[i]]=i+1;
        }
        return true;
    }
};
