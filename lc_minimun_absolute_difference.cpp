class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>res;
        int min=INT_MAX;
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<min)
            {
                min=arr[i]-arr[i-1];
            }
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==min)
            {
                res.push_back(arr[i-1]);
                res.push_back(arr[i]);
            }

            if(res.size()>1)
            {
                ans.push_back(res);
            }
            res.clear();
        }
        return ans;
    }
};
