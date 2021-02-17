class Solution {
public:
    string removeDuplicates(string S) {
        string res="";
        for(auto c:S){
            if(res.size() && res.back()==c) res.pop_back();
            else res.push_back(c);
        }
        return res;
    }
};