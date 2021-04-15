class Solution {
public:
    
    int count(int i,int j,int m,int n){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        else return count(i+1,j,m,n)+count(i,j+1,m,n);
    }
    
    int uniquePaths(int m, int n) {
        int i=0,j=0;
        int res=count(i,j,m,n);
        return res;
    }
};