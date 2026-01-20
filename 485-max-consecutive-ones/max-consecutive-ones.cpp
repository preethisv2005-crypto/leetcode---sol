class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp;
        int maxi = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(i==0){
              temp =1;
              if(nums[i]== 1){
                maxi = 1;
              }
            }
            else{
                if(nums[i]== 1 && nums[i] == nums[i-1] ){
                    temp = temp + 1;
                    if(maxi<temp){
                      maxi = temp;
                    }
                }
                else{
                    if(nums[i]== 1){
                      temp = 1;
                      if(maxi<temp){
                      maxi = temp;
                    }
                    }
                    
                }
            }

        }
        return maxi;
    }
};