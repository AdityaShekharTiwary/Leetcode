class Solution {
public:
    void solve(vector<char> &s,int left,int right){
        if(left>=right) return;
        char temp=s[left];
        s[left++]=s[right];
        s[right--]=temp;
        solve(s,left,right);
    }

    void reverseString(vector<char>& s) {
            solve(s,0,s.size()-1);
    }
};
