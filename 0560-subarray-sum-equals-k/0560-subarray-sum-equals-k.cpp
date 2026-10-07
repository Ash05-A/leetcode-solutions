class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int>v;
         int sum=0;
         int count=0;
         v[0]=1;
         for(int i=0;i<nums.size();i++)
         {
            sum=sum+nums[i];
            int a=sum-k;
            if(v.count(a)){
            count=count+v[a];
            }
            v[sum]++;
           

         }
         return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna