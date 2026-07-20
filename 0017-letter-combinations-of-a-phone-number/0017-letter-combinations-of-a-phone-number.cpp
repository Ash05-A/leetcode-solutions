class Solution {
private:
    void solve(string digits,string output,string map[],int index,vector<string>&ans)
    {
        //base
        if(index>=digits.size())
        {
            ans.push_back(output);
            return;
        }
        int n=digits[index]-'0';
        string val=map[n];
        for(int i=0;i<val.size();i++)
        {
            output.push_back(val[i]);
            solve(digits,output,map,index+1,ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index=0; 
        string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,map,index,ans);
        return ans;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna