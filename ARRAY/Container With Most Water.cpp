// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int maxArea=0;
        while(left<right)
        {
            int minHeight=min(height[left],height[right]);
            int length=right-left;
            int curArea=minHeight*length;
            maxArea=max(maxArea,curArea);
            if(height[left]< height[right])
                left++;
            else 
                right--;
        }
        return maxArea;
    }
};