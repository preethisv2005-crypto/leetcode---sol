class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        vector<int>nums1;
        nums1.insert(nums1.begin(),nums.begin(),nums.end());
        for(int i = 0 ; i < nums1.size() ; i++ ){
            if(nums1[i] == 0){
                nums.erase(nums.begin()+i-j);
                j++ ;
            }
        }
        for(int k = 0 ; k < j ; k++ ){
            nums.push_back(0);
        }

    }
};