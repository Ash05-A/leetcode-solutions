class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.size()!=t.size()) 
       return false;
       vector<int>box(26,0);
       for(int i=0;i<s.size();i++){
       box[s[i]-'a']++;
       box[t[i]-'a']--;
       }
       for(auto i:box){
        if(i!=0)
        return false;
       }
       return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna