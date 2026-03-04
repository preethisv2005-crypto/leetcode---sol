class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0 ;
            for(int j = i ; j < nums.size() ; j++){
                count += nums[j] ;
                if( count  == k){
                    l += 1 ;
                }

                
            }
        }
        return l ;
        
    }
};