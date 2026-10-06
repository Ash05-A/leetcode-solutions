class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> v;
       // bool maxans=true;
        for(int i=0;i<nums.size();i++)
        {
           v[nums[i]]++; 
        }
        for(auto i:v)
        {
            if(i.second>1)
            return true;
            //else false;

        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna