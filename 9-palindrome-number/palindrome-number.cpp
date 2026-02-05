class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        long long n = 0 ;
        int k = x ;
        while(k != 0){
            int last_didgit = k%10 ;
            n = n*10 + last_didgit ;
            k = k/10 ;
        }
        return x == n ;
    
        
    }
};