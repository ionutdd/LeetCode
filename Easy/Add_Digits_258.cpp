//https://leetcode.com/problems/add-digits/


//3 minutes
/*
class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;
        
        int sum = num;
        while (sum >= 10)
        {
            sum = 0;
            while (num != 0)
                {
                    sum += num %10;
                    num /= 10;
                }
            num = sum;
        }
        return sum;
    }
};
*/


//10 minutes
//Follow up (O(1) time complexity):
class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;

        if (num % 9 == 0)
            return 9;
        return num % 9;
    }
};
