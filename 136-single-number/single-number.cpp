class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n =  nums.size();
        int i = 0;
        int temp ;
        if(nums.size() == 1){
            temp = nums[0];
        }
        else{
            while(i < n){
            if(nums[i] == nums[i+1]){
                i = i + 2;
            }
            else{
                temp = nums[i];
                break ;
            }

        }

        }
        
        return temp ;
        
    }
};