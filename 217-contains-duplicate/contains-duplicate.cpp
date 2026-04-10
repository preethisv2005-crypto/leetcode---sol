class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool l = false ;
        unordered_map<int, int> k ;
        for(int i = 0 ; i < n ; i++){
            if(k.find(nums[i]) != k.end() && k.size() != 0){
                l = true ;
                return l ;

            }
            else{
                k[nums[i]] =i ;
            }
   
        }
        return l ;
    }
};