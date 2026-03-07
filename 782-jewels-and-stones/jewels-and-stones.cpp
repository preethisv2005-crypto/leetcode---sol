class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;
        for(int i : jewels){
            for(int j = 0 ; j < stones.size() ; j++){
                if(i == stones[j]){
                    count += 1 ;

                }
            }

        }
        return count ;
        
    }
};