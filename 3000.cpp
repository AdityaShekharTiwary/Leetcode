class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float max_dia=INT_MIN,ans=0;
        for(auto it:dimensions){
            float curr = sqrt(it[0]*it[0] + it[1]*it[1]);
            cout<<curr<<endl;
            float area = it[0]*it[1];
            if(curr>max_dia) {
                max_dia=curr;
                ans=area;
            }
            else if(curr==max_dia) ans=max(ans,area);
        }
        return ans;
    }
};