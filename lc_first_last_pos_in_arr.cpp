class Solution {
    int first_pos(vector<int>& a, int x){
        int n=a.size();
        int first_pos=n;
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]>=x){
                first_pos=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return first_pos;
    }
public:
    vector<int> searchRange(vector<int>& a, int x) {
        int first=first_pos(a,x);
        int last=first_pos(a,x+1)-1;
        if(first<=last){
            return {first,last};
        }
        return {-1,-1};
    }
};
