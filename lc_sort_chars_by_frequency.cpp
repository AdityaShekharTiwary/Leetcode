class Solution {
public:
    struct myclass{
        bool operator()(const pair<char,int>& a,const pair<char,int>& b){
        return a.second > b.second;
       }
    } comp;
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        string res="";

        vector<pair<char,int>> v;

        copy(m.begin(),m.end(),back_inserter(v));

        sort(v.begin(),v.end(),comp);

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                res=res+v[i].first;
            }
        }
        return res;
    }
};
