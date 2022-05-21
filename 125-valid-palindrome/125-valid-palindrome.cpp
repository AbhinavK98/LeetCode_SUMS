class Solution {
     //1) Remove invalid character
    //2) Convert to lowerCase
   //3) Check Palindrome

private:
    //1) Remove invalid character
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    //2) Convert to lowerCase
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    //3) Check Palindrome
    bool checkPalindrome(string a) {
    
      int i=0;
        int j=a.length()-1;
        while(i<=j)
        {
          if(a[i]==a[j])
          {
              i++;
              j--;
            }
            else{
            return 0;        
            }
        }
        return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        
        // //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};