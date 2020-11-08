class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int val=1,count=0,ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(val==arr[i])
                val++;
            else{
                while(val!=arr[i])
                {
                    count++;
                    if(count==k)
                        return val;
                    val++;
                }
                val++;
            }
        }
        return val+(k-count)-1;
    }
};
