class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n=A.size();
        int m=A[0].size();
        for(int i=0;i<n;i++)
        {
            reverse(A[i].begin(),A[i].end());
            int j=0;
            while(j<m)
            {
                if(A[i][j]==0)
                   A[i][j]=1;
                else
                   A[i][j]=0; 
                j++;       
            }   
        }        
        return A;
    }
};