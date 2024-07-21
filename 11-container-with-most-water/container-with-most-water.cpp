class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0,h,n=height.size(),j;
        j=n-1;
        for(int i=0;i<j;)
        {
           
            h=min(height[i],height[j]);
            int x=h*(j-i);
            maxarea=max(maxarea,x);
             if(height[i]>height[j] && j>i) 
                j--;
            else
                i++;
        }
        return maxarea;
    }
};