class Solution {
public:
     vector<vector<int>> result ;
     void backtrack(vector<int> &nums, vector<int> &temp, vector<bool> &user){
            if(temp.size() == nums.size()){
                result.push_back(temp);
                return ;
            }
            for(int i = 0 ; i < nums.size() ; i++){
                if(user[i] == true){
                    continue ;
                }
                if( i>0 && nums[i] == nums[i-1] && !user[i-1]){
                    continue ;
                }
                user[i] = true ;
                temp.push_back(nums[i]);
                backtrack(nums,temp,user);
                temp.pop_back();
                user[i] = false ;
                
            }

        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool>user(nums.size(),false) ;
        vector<int>temp ;
        backtrack(nums,temp,user) ;
        return result ;
    }
};
    