class Solution {
public:
    bool isPalindrome(int x) {
       int r;
         long long reverse=0;//we are asssigning reversed as 0
       int original=x;//we are storing original value as we are going to use x
        
        while(x>0)
        {
            r=x%10;
     reverse=(reverse*10)+r;
            x=x/10;
        }
        if(original==reverse)
        {
            return 1;
        }
        else
        {
            return 0;    
        }
        
    }
};