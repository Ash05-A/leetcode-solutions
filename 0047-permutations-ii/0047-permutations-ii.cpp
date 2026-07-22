class Solution {
private:
    void solve(vector<int>nums,int index,vector<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        
        for(int i=index;i<nums.size();i++)
        {   
            bool dup=false;
            for(int j=index;j<i;j++){
            if(nums[i]==nums[j]){
            dup=true;
            break;
        }
        }
            if(!dup){
            swap(nums[index],nums[i]);
            solve(nums,index+1,ans);
            swap(nums[index],nums[i]);
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        solve(nums,index,ans);
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna