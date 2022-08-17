class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int j=height.size()-1;
        int i=0;
        int max=0;
        int area;
        while(i<j){
            area=min(height[i],height[j])*(j-i);
               if(area>max)
                   max=area;
            if(min(height[i],height[j])==height[i])
                i++;
            else
                j--;     
        }
        
        return max;
    }
};


    