class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int res=0;
        int n=arr.size();
        for(int i=0;i<=n-3;i++)
        {
            for(int j=i+1;j<=n-2;j++)
            {
                if(abs(arr[j]-arr[i])>a)
                    continue;
                for(int k=j+1;k<=n-1;k++)
                {
                    if(abs(arr[k]-arr[j])>b||abs(arr[k]-arr[i])>c)
                    continue;
                    res++;
                }
            }
        }
        return res;
    }
};
