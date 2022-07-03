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

            int n = nums.size();
            sort(nums.begin(), nums.end());
            int count = 1;
            vector<int> ans;
     
            for (int i = 0;i < nums.size(); i++)
            {
                count=1;
               while(i+1<n && nums[i]==nums[i+1])
               {
                   count++;
                   i++;
               }
                if(count>n/3)
                {
                    ans.push_back(nums[i]);
                }
                
            }
            return ans;
        }
};