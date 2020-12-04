// TC :_ O(n2)

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<J.size();i++){
            for(int j=0;j<S.size();j++){
                if(J[i]==S[j]) count++;
            }
        }
        return count;
    }
};




// TC :-  O(J+S)

 int numJewelsInStones(string J, string S) {
        int res = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for (char s : S)
            if (setJ.count(s)) res++;
        return res;
    }
