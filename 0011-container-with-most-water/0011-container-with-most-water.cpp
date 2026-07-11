class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0;
        int e= n-1;
        int ans;
        int water=0;

        while(s<e)
        {  int h=min(height[s],height[e]);
                int w=e-s;
                ans=w*h;
                 
                water=max(ans,water);
                 
        
             if(height[s]<height[e])
             s++;
             else
             e--;
        }
            
        return water;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna