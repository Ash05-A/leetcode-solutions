class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            map[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
       {
           if(map[nums2[i]]==1)
           {

          //if( map.count(nums2[i]))
            v.push_back(nums2[i]);
            map[nums2[i]]=0;
           // map.erase(nums2[i]);
            }
       }
        return{v};
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna