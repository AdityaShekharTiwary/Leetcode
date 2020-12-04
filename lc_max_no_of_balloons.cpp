class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int hash[256]={0};
        for(auto i:text)
            hash[i]++;
        int a= min({hash['b'],hash['a'],hash['l']/2,hash['o']/2,hash['n']}) ;
        cout<<a<<" "   ;
        return a;
        }
};
