class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {

           	// APPROACH 1: T.C =O(N*N), BRUTEFORCE APPROACH[TLE]

           	//        int n=nums.size();
           	//         vector<int> ans;

           	//         for(int i=0;i < nums.size();i++)            
           	//         {
           	//                   int count =0;
           	//             for(int j=i+1;j < nums.size();j++)
           	//             {
           	//                 if(nums[i]==nums[j])
           	//                     count++;
           	//             }
           	//             if(count==n/3)
           	//             {
           	//                 ans.push_back(nums[i]);
           	//             }
           	//         }

           	//        return ans; 
            
            
            // APPROACH 2: T.C =O(N LOGN), BETTER APPROACH

//             int n = nums.size();
//             sort(nums.begin(), nums.end());
//             int count = 1;
//             vector<int> ans;
     
//             for (int i = 0;i < nums.size(); i++)
//             {
//                 count=1;
//                while(i+1<n && nums[i]==nums[i+1])
//                {
//                    count++;
//                    i++;
//                }
//                 if(count>n/3)
//                 {
//                     ans.push_back(nums[i]);
//                 }
                
//             }
//             return ans;
                        
            
            // APPROACH 3: T.C =O(N), OPTIMAL APPROACH [MOST VOTING ALGORITHIM]
            
            int num1=-1;
            int num2=-1;
            int count1=0;
            int count2=0;
            int n=nums.size();
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==num1) count1++;
                else if(nums[i]==num2) count2++;
                else if(count1==0)
                {
                    num1=nums[i];
                    count1=1;
                }
                else if(count2==0)
                {
                    num2=nums[i];
                    count2=1;
                }
                else {count1--;
                      count2--;}
            }
            vector<int>ans;
           count1=count2=0;
            for(int i=0;i<n;i++){
                if(nums[i]==num1){
                    count1++;
                }
                else if(nums[i]==num2){
                    count2++;
                }
            }
            if(count1>n/3){
                ans.push_back(num1);
            }
             if(count2>n/3){
                ans.push_back(num2);
            }
            return ans;
            

        }
};