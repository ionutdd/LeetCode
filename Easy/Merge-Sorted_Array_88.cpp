//https://leetcode.com/problems/merge-sorted-array/
//30 minutes

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n);
        if (m == 0)
            for (int i = 0; i < nums2.size(); i++)
                nums1[i] = nums2[i];
        if (n == 0)
            return;
        int k = 0;
        int i = 0;
        int j = 0;
        while (i != m || j != n)
        {
            if (i == m)
            {
                while (j < n)
                    {
                        nums3[k] = nums2[j];
                        k++;
                        j++;
                    }
                break;
            }
            else if (j == n)
            {
                while (i < m)
                    {
                        nums3[k] = nums1[i];
                        k++;
                        i++;
                    }
                break;
            }
            else if (nums1[i] > nums2[j])
                {
                    nums3[k] = nums2[j];
                    k++;
                    j++;
                }
            else if (nums1[i] < nums2[j])
                    {
                        nums3[k] = nums1[i];
                        k++;
                        i++;
                    }
            else
                {
                    nums3[k] = nums1[i];
                    k++;
                    nums3[k] = nums2[j];
                    k++;
                    i++; j++;
                }
        }
        for (int i = 0; i < m + n; i++)
            nums1[i] = nums3[i];
    }
};
