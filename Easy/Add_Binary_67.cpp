//https://leetcode.com/problems/add-binary/
//25 minutes

class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> A;
        vector<int> B;
        string C;
        string answer;
        if (a.size() < b.size())
            {
                int dif = b.size() - a.size();
                while(dif!=0)
                {
                    A.push_back(0);
                    dif--;
                }
            }
        if (b.size() < a.size())
            {
                int dif = a.size() - b.size();
                while(dif != 0)
                {
                    B.push_back(0);
                    dif--;
                }
            }
        for (int i = 0; i < a.size(); i++)
            A.push_back(a[i] - '0');
        for (int i = 0; i < b.size(); i++)
            B.push_back(b[i] - '0');
        bool remember = false;
        for (int i = A.size() - 1; i >= 0; i--)
        {
            if ((A[i] + B[i]) == 1 && remember == false)
                C.push_back('1');
            else if ((A[i] + B[i]) == 0 && remember == false)
                C.push_back('0'); 
            else if ((A[i] + B[i]) == 0 && remember == true)
                {
                    C.push_back('1'); 
                    remember = false;
                }
            else if ((A[i] + B[i]) == 1 && remember == true)
                C.push_back('0'); 
            else if ((A[i] + B[i] == 2) && remember == false)
            {
                C.push_back('0');
                remember = true;
            }
            else if ((A[i] + B[i] == 2) && remember == true)
            {
                C.push_back('1');
            }     
        }
        if (remember == true)
            C.push_back('1');
        for (int i = C.size() - 1; i >= 0; i--)
            answer.push_back(C[i]);
        return answer;
    }
};
