class Solution {
public:
void set(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans)
{
    if(index>=nums.size())
    { 
        bool dup=false;
        for(auto& row:ans){
            if (output==row){
            dup=true;
            break;
        }}
            if(dup==false)
            ans.push_back(output);
            
        
        
        return;
        }
    
        
    
    set(nums,output,index+1,ans);

    output.push_back(nums[index]);
    set(nums,output,index+1,ans);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     
        int index=0;
        vector<vector<int>>ans;
        vector<int>output;
        sort(nums.begin(),nums.end());
        set(nums,output,index,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna