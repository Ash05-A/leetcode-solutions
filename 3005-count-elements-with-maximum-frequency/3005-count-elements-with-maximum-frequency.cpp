class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq=0;
         int maxans=0;
        unordered_map<int,int>count;
        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
            maxfreq=max(maxfreq,count[nums[i]]);

        }
        for (auto i:count ){
            if(i.second==maxfreq)
            {
                maxans=maxans+i.second;
                


            }
            

        }
        return maxans;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna