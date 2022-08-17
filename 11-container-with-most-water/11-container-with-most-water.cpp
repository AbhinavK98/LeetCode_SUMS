//Approach 2:OPtimal(Two pointer approach)
//First took 2 pointer start and end

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int end=height.size()-1;
        int start=0;
        int maxarea=0;
        int area;
        while(start<end){
            area=min(height[start],height[end])*(end-start);
               if(area>maxarea)
                   maxarea=area;
            if(min(height[start],height[end])==height[start])
                start++;
            else
                end--;     
        }
        
        return maxarea;
    }
};


    