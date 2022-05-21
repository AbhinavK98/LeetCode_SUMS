class Solution {
    int getPivot(vector<int>& arr) {

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
   int Bsearch(vector<int>& nums,int s, int e, int key) {
         int start=s;
         int end=e;
    int mid=start + (end-start)/2;
        //THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE

    while(start<=end)
    {
        if(nums[mid]==key)
        {
            return mid;
        }

        //if value of key is greater than mid then to go right

        if(key>nums[mid])
        {
            start=mid+1;
        }
        else{//key<arr[mid]
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

public:
    int search(vector<int>& nums,int target)
{
        
    int pivot = getPivot(nums);
    if( target >= nums[pivot] && target <= nums[nums.size()-1])
    {
        //BS on second line
        return Bsearch(nums, pivot,nums.size()-1, target);
        
    }
    else
    {
        //BS on first line
        return Bsearch(nums, 0, pivot - 1, target);
    }    
}
};