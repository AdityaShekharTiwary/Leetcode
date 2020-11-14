class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans = "";
        if(S.size()==0 || S.size()==2)
            return ans;
       stack<char> para;
        for(int i=0;i<S.size();i++){
            if(para.size()==0){
                para.push(S[i]);
                continue;
            }
            else if(S[i]==')' && para.top()=='('){
                para.pop();
                if(para.size()==0)
                    continue;
                ans=ans+')';
            }
            else{
            para.push(S[i]);
            ans=ans+S[i];
        }
    }
        return ans;
    }
};
