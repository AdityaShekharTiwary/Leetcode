class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_area=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(height[i]<height[j]){
                if(max_area<height[i]*(j-i))
                    max_area=height[i]*(j-i);
                i++;
            }
            else {
                if(max_area<height[j]*(j-i))
                    max_area=height[j]*(j-i);
                j--;
            }
        }
        return max_area;
    }
};
