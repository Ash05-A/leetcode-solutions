class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<vector<int>>v(2);
       for(int i=0;i<s.size();i++){
        v[0].push_back(s[i]-'a');
       } 
        for(int i=0;i<t.size();i++){
        v[1].push_back(t[i]-'a');
        }
    
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        return v[0]==v[1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna