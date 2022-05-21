//Here we can use linear search  and tr4averse and find out maximum but then time complexity will be O(n) but then we can use better approach that is binary search in O(log n) : in this first we find out the mid and check if mid+1 is greater than mid then we understand that mid is not the peak element and we assign s=mid+1 and in else if mid is greater than mid+1 then we assign end=mid.
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid =s+(e-s)/2;
        
        while(s<e)// when s=e we will come out of loop and return s 
        {
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            { e=mid; //as in this case mid is greater element in array so we are assigning end to mid and loop will break as s equals to e.      
            }
        mid =s+(e-s)/2;
        }
            return s;// at this 
    }

};