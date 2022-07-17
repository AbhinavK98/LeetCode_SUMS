class Solution {
public:
    //Approach 1: BRUTEFORCE O(n*4) not working solution
    vector<vector<int>> fourSum(vector<int>& nums, long long int target){
        vector< vector<int> > ans;
//         for(int i=0;i<nums.size()-3;i++)
//         {
//             for(int j=i+1;j<nums.size()-2;j++)
//             {
//                 for(int k=j+1;j<nums.size()-1;k++) 
//                 {
//                     for(int l=k+1;k<nums.size();l++){
//                         if(nums[i]+nums[j]+nums[k]+nums[l]==target){
//                             vector<int>temp;
//                             temp.push_back(nums[i]);
//                             temp.push_back(nums[j]);
//                             temp.push_back(nums[k]);
//                             temp.push_back(nums[l]);
//                             ans.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
        //APPROACH 2: BETTER
        
        //SORT THE ARRAY
        //ITERATE i AND j LOOP FROM 0 TO n-3 AND i+1 TO n-2 RESPECTIVELY
        //NOW TAKE TWO POINTER l AND h WHERE l=j+1 AND h=n-1 AND CHECK WHILE(l<h) 
        //if(nums[l]+nums[h]==target-(nums[i]+nums[j]))
        //else l++ if less and if greater h--
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
             long long int tsum;
            tsum=target-(nums[i]+nums[j]);
                    int l=j+1,h=n-1;
                while(l<h){
                    if(nums[l]+nums[h]==tsum)
                    {
                        vector<int> temp={nums[i],nums[j],nums[l],nums[h]};
                        ans.push_back(temp);
                    while(l<h && nums[l]==nums[l+1]) {
                        l++;
                    }
                    while(l<h && nums[h]==nums[h-1]) {
                        h--;
                    }
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]<tsum)
                    {
                        l++;
                    }
                    else{
                        h--;
                    }
                }
            }
        }
        return ans;
        
    }
};

    