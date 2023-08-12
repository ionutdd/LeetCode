//https://leetcode.com/problems/longest-palindromic-substring/
//1,5 hrs


//There is a better solution to this problem, the Manacher's algorithm which is O(N) instead of O(N^2).
//This is O(N^2) solution
//Brute force is O(N^3)
class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size();
    int start = 0; // Starting index of the longest palindromic substring
    int maxLength = 1; // Length of the longest palindromic substring
    
    for (int i = 0; i < n; i++) {
        // Consider odd-length palindromic substrings
        int left = i;
        int right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
        
        // Consider even-length palindromic substrings
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }
    
    return s.substr(start, maxLength);
}
};
