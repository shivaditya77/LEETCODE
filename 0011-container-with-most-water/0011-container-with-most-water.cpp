class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0;
       int j=height.size()-1;
       int maxarea=0;
       while(i<=j)
       {
        int area=min(height[i],height[j])*(j-i);
        maxarea=max(area,maxarea);
        if(height[i]<height[j])
        {
            i++;
        }
        else if(height[i]>height[j])
        {
            j--;
        }
        else if(height[i]==height[j])
        {
            j--; //i++ bhi kar sakte the
        }
       } 
       return maxarea;
    }
};