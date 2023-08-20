//https://leetcode.com/problems/count-and-say/submissions/
//15 minutes

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        vector<int> ans;
        ans.push_back(1);
        string Answer;
        for (int i = 2; i <= n; i++)
        {
            string newAns;
            for (int j = 0; j < ans.size(); j++)
            {
                int counter = 1;
                if (j < ans.size() - 1)
                    while (ans[j] == ans[j + 1])
                    {
                        counter++;
                        j++;
                        if (j == ans.size() - 1)
                            break;
                    }
                newAns += to_string(counter);
                newAns += to_string(ans[j]);
            }
            for (int i = 0; i < newAns.size(); i++)
                {
                    if (i <= ans.size() - 1)
                        ans[i] = newAns[i] - '0';
                    else
                        ans.push_back(newAns[i] - '0');
                }
            newAns = "";
        }
        for (int i = 0; i < ans.size(); i++)
            Answer += to_string(ans[i]);
        return Answer;
    }
};
