class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        int cnt=0,i=0;
        while(i<m){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==m-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                cnt++;
            }
            i++;
        }
        return cnt>=n;
    }
};