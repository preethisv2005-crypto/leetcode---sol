class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> k ;
        int i = 0;
        while( i< accounts.size()){
            int l = 0 ;
            int j = 0;
            while(j < accounts[i].size()){
                vector<int> s = accounts[i];
                l+= s[j];
                j++;
            }
            k.push_back(l);
            i++;
  
        } 
        return *std::max_element(k.begin(),k.end()) ;
        
    }
};