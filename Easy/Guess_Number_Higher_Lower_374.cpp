//https://leetcode.com/problems/guess-number-higher-or-lower/
//5 minutes

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (n == 1)
            return 1;
        int left = 1;
        int right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (guess(mid) == 0)
                return mid;
            if (guess(mid) == -1)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return 0;
    }
};
