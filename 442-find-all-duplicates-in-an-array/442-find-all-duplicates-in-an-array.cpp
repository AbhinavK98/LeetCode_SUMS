class Solution {
public:

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    int n=nums.size();
    
    sort(nums.begin(),nums.end());
    
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            int t=nums[i];
            ans.push_back(t);
        }
            
    }
    
    return ans;
}
};