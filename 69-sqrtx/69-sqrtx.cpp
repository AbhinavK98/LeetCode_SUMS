class Solution {
public:
    int mySqrt(int x) {
        
        //1st approach using function SQRT(X)
        // int ans= sqrt(x);
        // return ans;
        
        //2nd Approach Bruteforce TC O(log n)
        
        long long i = 1, result = 1;
        while (result <= x)
        {
          i++;
          result = i * i;
        }
        return i-1 ;
        
       //  int s=0;
       //  int e=x;
       // long long int mid=s+(e-s)/2;
       //  int ans=0;
       //  while(s<=e){
       //   long long int square=mid*mid;
       //      if(square==x)
       //      {
       //          return mid;
       //      }
       //      else if(square<x)
       //      {
       //          ans=mid;
       //          s=mid+1;
       //      }
       //      else{
       //      e=mid-1;    
       //      }
       //      mid=s+(e-s)/2;
       //  }  
    }
};