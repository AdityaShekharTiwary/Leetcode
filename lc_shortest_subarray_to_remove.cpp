class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low+1<n and arr[low]<=arr[low+1])
            low++;
        if(low==n-1)return 0;
        while(high>=low and arr[high-1]<=arr[high])
            high--;
        int ans=min(n-low-1,high);
        int i=0;
        int j=high;
        while(i<=low and j<n )
        {
            if(arr[i]<=arr[j])
            {
                ans=min(ans,j-i-1);
                i++;
            }
            else
                j++;
        }
        return ans;
    }
};
