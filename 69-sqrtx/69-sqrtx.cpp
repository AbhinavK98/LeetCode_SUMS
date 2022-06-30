class Solution {
public:
    int mySqrt(int x) {
        
        //1st approach using function SQRT(X)
        int ans= sqrt(x);
        return ans;
        
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