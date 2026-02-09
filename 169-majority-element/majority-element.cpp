class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k ;
        int temp = 0 ;
        set<int> set_nums(nums.begin(), nums.end());
        for( int i : set_nums){
            int count = 0 ;
            for( int j : nums){
                if(i == j){
                    count ++ ;
                }
            }
            if(count > temp){
                temp = count ;
                k = i ;
            }
        }

        return k ;
        
    }
};