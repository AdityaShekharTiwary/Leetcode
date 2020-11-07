class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
    int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<m)
            {
                if(grid[i][j]<0)
                    count++;
                j++;
            }
        }
        return count;
    }
};
