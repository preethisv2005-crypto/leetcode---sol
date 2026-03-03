class Solution {
public:
    int lengthOfLastWord(string s) {
        int k = 0 ;
        for(int i = s.size()-1 ; i>=0; i--){
            if( i != s.size()-1 && s[i] == ' ' &&  k!= 0 ){
                break ;
            }
            else{
                if(s[i] != ' '){
                    k = k + 1 ;
                }
     

            }
            


        }
        return k ;
        
    }
};