class Solution {
public:
    int longestPalindrome(string s) {
    int n = s.size();
    unordered_map<char, int>m;
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }
    int flag = 0;
    int c = 0;
    for(auto i = m.begin(); i != m.end(); i++){
        if((i -> second) % 2 == 0){
            c += i -> second;
        }
        else{
            c += (i->second - 1);
            flag = 1;
        }
    }
    return c + flag;
    }
};
