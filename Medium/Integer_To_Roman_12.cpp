//https://leetcode.com/problems/integer-to-roman/
//30 minutes

class Solution {
public:
    string intToRoman(int num) {
        int multiplier = 10;
        string ans;
        while (multiplier <= num * 10)
        {
            if (multiplier == 10 && (num % multiplier <= 3))
                for (int i = 0; i < num % multiplier; i++)
                    ans.insert(0, "I");
            if (multiplier == 10 && (num % multiplier <= 8 && num % multiplier >= 5))
            {
                ans.insert(0, "V");
                for (int i = 0; i < num % multiplier - 5; i++)
                    ans.insert(1, "I");
            }
            if (multiplier == 10 && (num % multiplier == 4))
                ans.insert(0, "IV");
            if (multiplier == 10 && (num % multiplier == 9))
                ans.insert(0, "IX");


            if (multiplier == 100 && (num % multiplier <= 30))
                for (int i = 0; i < (num % multiplier) / 10; i++)
                    ans.insert(0, "X");
            if (multiplier == 100 && (num % multiplier <= 80 && num % multiplier >= 50))
            {
                ans.insert(0, "L");
                for (int i = 0; i < (num % multiplier - 50) / 10; i++)
                    ans.insert(1, "X");
            }
            if (multiplier == 100 && (num % multiplier == 40))
                ans.insert(0, "XL");
            if (multiplier == 100 && (num % multiplier == 90))
                ans.insert(0, "XC");


            if (multiplier == 1000 && (num % multiplier <= 300))
                for (int i = 0; i < (num % multiplier) / 100; i++)
                    ans.insert(0, "C");
            if (multiplier == 1000 && (num % multiplier <= 800 && num % multiplier >= 500))
            {
                ans.insert(0, "D");
                for (int i = 0; i < (num % multiplier - 500) / 100; i++)
                    ans.insert(1, "C");
            }
            if (multiplier == 1000 && (num % multiplier == 400))
                ans.insert(0, "CD");
            if (multiplier == 1000 && (num % multiplier == 900))
                ans.insert(0, "CM");

            if (multiplier == 10000)
                for (int i = 0; i < (num % multiplier) / 1000; i++)
                    ans.insert(0, "M");

            num /= multiplier;
            num *= multiplier;
            multiplier *= 10;
        }
        return ans;
    }
};
