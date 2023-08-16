//https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//30 minutes

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0)
            return ans;
        unordered_map<char, string> hash;
        hash['2'] = "abc";
        hash['3'] = "def";
        hash['4'] = "ghi";
        hash['5'] = "jkl";
        hash['6'] = "mno";
        hash['7'] = "pqrs";
        hash['8'] = "tuv";
        hash['9'] = "wxyz";
        ans.push_back("");
        for (int i = 0; i < digits.length(); i++)
        {
            vector<string> temp;
            for (int j = 0; j < ans.size(); j++)
                for (int k = 0; k < hash[digits[i]].size(); k++)
                    temp.push_back(ans[j] + hash[digits[i]][k]);
            ans = temp;
        }
        return ans;
    }
};
