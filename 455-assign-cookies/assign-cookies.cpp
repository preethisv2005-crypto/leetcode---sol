class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        std::sort(s.begin(), s.end());
        std::sort(g.begin(), g.end());
        int j = 0 ;
        int i = 0 ;
        while(i <g.size() && j<s.size()){
            if(s[j] >= g[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
        
    }
};