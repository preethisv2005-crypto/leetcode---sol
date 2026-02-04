class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>j ;
        for(int i=0 ; i < nums1.size() ; i++){
            int target = nums1[i] ;
            auto it = std::find(nums2.begin(), nums2.end(), target);
            if(it != nums2.end() ){
                j.push_back(nums1[i]);
            }
            else{
                continue ;
            }

        }
        set<int> k(j.begin(), j.end());
        vector<int>s(k.begin(), k.end());
        return s ;
    }
};