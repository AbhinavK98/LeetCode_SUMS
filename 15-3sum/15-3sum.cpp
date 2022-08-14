class Solution
{
    public:
       	//Approach 1:Time: O(n^3), Space: O(1)
        vector<vector < int>> threeSum(vector<int> &nums)
        {

           	//          vector<vector < int>> ans;
           	//         for(int i=0;i < nums.size()-3;i++){

           	//             for(int j=i+1;j < nums.size()-2;j++){

           	//                 for(int k=j+1;k < nums.size()-1;k++){

           	//                     if(nums[i]+nums[j]+nums[k]==0)
           	//                     {
           	//                             vector < int>temp;
           	//                              temp.push_back(nums[i]);
           	//                             temp.push_back(nums[j]);
           	//                               temp.push_back(nums[k]);    
           	//                             ans.push_back(temp);
           	//                     }
           	//                 }
           	//             }
           	//         }
            	//Approach 2:
            
            sort(nums.begin(),nums.end());
            vector<vector < int>> ans;
            for (int i = 0; i < nums.size() - 2; i++)
            {
                if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
                {
                int lo = i + 1, hi = nums.size() - 1, sum = 0 - nums[i];
                while (lo < hi)
                {
                    if (nums[i] + nums[lo] + nums[hi] == 0)
                    {
                        vector<int> temp = { nums[i],
                            nums[lo],
                            nums[hi]
                        };
                       	// temp.push_back(nums[i]);
                       	// temp.push_back(nums[lo]);
                       	// temp.push_back(nums[hi]);
                        ans.push_back(temp);

                        while (lo < hi && nums[lo] == nums[lo + 1])

                            lo++;

                        while (lo < hi && nums[hi] == nums[hi - 1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if (nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
                }
            }
        }
     return ans;
}
};