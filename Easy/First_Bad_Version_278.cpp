//https://leetcode.com/problems/first-bad-version/submissions/
//20 minutes


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left < right)
        {
            int mid = left + (right - left) / 2;  //avoiding potential overflows
            if (isBadVersion(mid) == true)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
