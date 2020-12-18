class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> res;
        if(T.size()==0) return res;
        for(int i=0;i<T.size()-1;i++){
            int flag=0;
            for(int j=i+1;j<T.size();j++){
                if(T[i]<T[j]){
                    res.push_back(j-i);
                    flag=1;
                    break;
                }
                if(j==T.size()-1 && flag==0)
                     res.push_back(0);
            }
        }
        res.push_back(0);
        return res;
    }
};
