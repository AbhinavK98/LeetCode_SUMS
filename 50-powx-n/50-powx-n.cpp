class Solution {
public:
    double myPow(double x,int n) {
        
        // Approach 1: Bruteforce using loop : T.C=O(n), S.C=O(1)
        
       //  double ans=1;
       //  long long nn=n;//storing n in nn such that n should not be vanished 
       //  if(nn<0) nn=-1*nn;//checking if nn is negative converting it in positive then finding answer then in last step checking if n was negative then ans=1/ans
       //  if(nn==0)
       //      return 1;
       //  for(int i=0;i<nn;i++)
       //  {
       //   ans*=x;  
       //  }
       //   if(n<0)
       // ans=(double)1/(double)(ans);
       //  return ans;
        
        
                //Approach 2: OPTIMIZED : T.C=O(logn), S.C=O(1)--dividing power by 2 for even and for odd subtracting by 1 which ultimately makes it even. Similar to Binary search.
        
        double ans=1;
        long long nn=n;
        if(nn<0) nn = -1*nn ;
        while(nn!=0){
            if(nn%2==0){//if pow is even
                x=x*x;
                nn=nn/2;
            }
            else{//if pow is odd
                ans=ans*x;
                nn=nn-1;   
            }
        }
        if(n<0) ans= (double)(1.0) / (double)(ans);
        return ans;

    }
    
};