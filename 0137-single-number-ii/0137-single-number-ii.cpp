class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
          a=a^=nums[i] & ~b;
           b=b^=nums[i] & ~a;
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna