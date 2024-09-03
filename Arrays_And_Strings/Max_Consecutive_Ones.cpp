#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        // Variables to track the left boundary of the window, 
        // the maximum number of 1s, and the current count of 0s in the window.
        int left = 0, maxOnes = 0, zeroCount = 0;

        // Traverse through each element in the nums array using the right pointer.
        for (int right = 0; right < nums.size(); right++) {

            // If the current element is 0, increment the zeroCount.
            if (nums[right] == 0) 
            {

                zeroCount++;
            }

            // If the number of 0s in the current window exceeds k, 
            // move the left pointer to shrink the window.
            while (zeroCount > k) {

                if (nums[left] == 0)
               {

                    zeroCount--; // Decrement the zeroCount as we are moving the left pointer.
                }
                left++; // Move the left pointer to the right.
            }

            // Calculate the maximum length of the subarray with at most k 0s.
            maxOnes = max(maxOnes, right - left + 1);
        }

        // Return the maximum length found.
        return maxOnes;
    }
};

int main() {
    // Example usage:
    Solution solution;

    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0, 1, 0};
    int k = 2;

    int result = solution.longestOnes(nums, k);
    cout << "Maximum length of subarray with at most " << k << " zeros flipped: " << result << endl;

    return 0;
}
