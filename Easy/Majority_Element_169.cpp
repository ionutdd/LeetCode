//https://leetcode.com/problems/majority-element/
//

//First solution that is obvious with hash, but we need O(1) additional space complexity

/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int maxi = -1;
        int answer;
        for (int i = 0; i < nums.size(); i++)
            {
                hash[nums[i]] += 1;
                if (hash[nums[i]] > maxi)
                    answer = nums[i];
                if (hash[nums[i]] > (nums.size()/2))
                    return nums[i];
            }
        return answer;
    }
};
*/

//To solve the problem, we need to apply the "Boyer-Moore Voting Algorithm". This way the time complexity is O(n) and additional space complexity is O(1).

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        for (int i = 1; i< nums.size(); i++)
        {
            if (count == 0)
            {
                candidate = nums[i];
                count++;
            }
            else if (nums[i] == candidate)
                    count++;
                 else
                     count--;
        }
        return candidate;
    }
};

//I must admit, I didn't figure out this clever solution, so I had to research and understand the solution, instead of coming up with it.
