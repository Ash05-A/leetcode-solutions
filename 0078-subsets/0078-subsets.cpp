class Solution {
public:
void set(vector<int>nums,int index,vector <int>output,vector<vector<int>>&ans)
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    set(nums,index+1,output,ans);

    output.push_back(nums[index]);
    set(nums,index+1,output,ans);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<int>output;
        vector<vector<int>>ans;
        set(nums,index,output,ans);
        return ans;


        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna