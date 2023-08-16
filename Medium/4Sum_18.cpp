//https://leetcode.com/problems/4sum/
//Didn't manage to solve this problem;
//2hrs
/*class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<pair<int, int>> hash;
        sort(nums.begin(), nums.end());
        
        if (nums.size() < 4)
            return ans;

        if (nums[0] == nums[nums.size() - 1]) {
            if (nums[0] * 4 == target) {
                ans.push_back({nums[0], nums[0], nums[0], nums[0]});
                return ans;
            }
        }
        
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                hash.push_back(make_pair(nums[i], nums[j]));
            }
        }
        
        unordered_map<string, int> prevSolution;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int complement = target - nums[i] - nums[j];
                for (const auto& pair : hash) {
                    if (pair.first + pair.second == complement) {
                        vector<int> solution = {pair.first, pair.second, nums[i], nums[j]};
                        sort(solution.begin(), solution.end());
                        if (prevSolution.find(to_string(solution[0]) + to_string(solution[1]) + to_string(solution[2]) + to_string(solution[3])) == prevSolution.end()) {
                            if (pair.first != nums[i] && pair.first != nums[j] && pair.second != nums[i] && pair.second != nums[j]) {
                                prevSolution[to_string(solution[0]) + to_string(solution[1]) + to_string(solution[2]) + to_string(solution[3])] = 1;
                                ans.push_back(solution);
                            }
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};
*/


//Real solution
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) ++left;
                        while (left < right && nums[right] == nums[right - 1]) --right;
                        ++left;
                        --right;
                    } else if (sum < target) {
                        ++left;
                    } else {
                        --right;
                    }
                }
            }
        }
        
        return ans;
    }
};
