class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0) return 0;
        int l[n];
        int r[n];
        int ml,mr;
        ml=l[0]=height[0];
        mr=r[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            if(height[i]>l[i-1]){

                l[i]=height[i];
            }
            else {
                l[i]=l[i-1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<l[i]<<" ";
        }
        for(int i=n-2;i>=0;i--){
            if(height[i]>r[i+1]){

                r[i]=height[i];
            }
            else {
                r[i]=r[i+1];
            }
        }
        for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(l[i],r[i])-height[i];
            cout<<l[i]<<" "<<r[i];
        }
        return sum;
    }
};
