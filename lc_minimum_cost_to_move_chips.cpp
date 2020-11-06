class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int count=0;
        int size=position.size();
        for(int i=0;i<size;i++)
        {
            if(position[i]%2!=0)
            {
                count++;
            }
        }
        return min(count,size-count);
    }
};
