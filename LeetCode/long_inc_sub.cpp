// Intuition
// The problem requires finding the length of the longest strictly increasing subsequence in the given array nums. A subsequence is a sequence of elements in the array that retains their relative order but not necessarily their consecutive positions. A strictly increasing subsequence implies that each element in the subsequence is greater than the previous one.

// Approach
// We can solve this problem efficiently using dynamic programming. The key idea is to maintain an array tails where tails[i] represents the smallest ending element of all increasing subsequences of length i+1. This array is crucial in determining where the current element x fits in the existing subsequences.

// Initialize an array tails of the same length as nums to store the ending elements of increasing subsequences.

// Initialize a variable size to keep track of the current length of the longest increasing subsequence.

// Iterate through each element x in nums:

// Use binary search to find the correct position for x in the tails array.

// Update the corresponding position in tails with x.

// If x is greater than all ending elements in tails, append it to the end and increment size.

// The final value of size represents the length of the longest increasing subsequence.

// Complexity
// Time complexity: The time complexity of this solution is O(N log N), where N is the length of the input array nums. The binary search operation dominates the time complexity.
// Space complexity: The space complexity is O(N) as we need an additional array (tails) of the same length as nums.
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> tails(nums.size(), 0);
        int size = 0;

        for (int x : nums) {
            int i = 0, j = size;
            while (i != j) {
                int m = (i + j) / 2;
                if (tails[m] < x)
                    i = m + 1;
                else
                    j = m;
            }
            tails[i] = x;
            if (i == size) ++size;
        }
        return size;
    }
};