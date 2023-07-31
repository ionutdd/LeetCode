//https://leetcode.com/problems/happy-number/
//5 minutes

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> hash;
        hash[n] = 1;
        while (n != 1)
        {
            int sum = 0;
            while (n != 0)
            {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            if (hash[sum] == 1)
                return false;
            hash[sum] = 1;
            n = sum;
        }
        return true;
    }
};
