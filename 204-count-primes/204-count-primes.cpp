class Solution {
public:
    int countPrimes(int n) {
        
        int cnt=0;
        vector<bool>prime(n+1,true);//here assigning all values as prime
        prime[1]=prime[0]=false;//here we are assigning 1 and 0 as false
        
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true){//if it is true means it is prime increasing count
                cnt++;
                for(int j=2*i;j<n;j=j+i)//after checking i as prime assigning all multiple of i as non                                                  prime
                {
                    prime[j]=false;
                }
            }
        }
        return cnt;
    }
};