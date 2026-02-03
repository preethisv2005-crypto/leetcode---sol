class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k = nums.size();
        vector<int>p ;
        for(int i = 0; i< k ; i++){
            for (int j = i+1 ; j < k ; j++){
                if(nums[j] + nums[i] == target){
                    p.push_back(i);
                    p.push_back(j);
                    return p;
                    }
             }
      
        }
        return p ;
    }
};