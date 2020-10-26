class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = -1;
        int size = candies.size();

        vector<bool> result(size, false);

        for( int i=0; i<size; i++){
            if( candies[i] > greatest ){
                greatest = candies[i];
            }
        }

        for( int i=0;i<size;i++){
            if( candies[i] + extraCandies >= greatest ){
                result[i] = true;
            }
        }

        return result;

    }
};
