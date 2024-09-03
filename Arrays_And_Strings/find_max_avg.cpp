#include <iostream>
#include <vector>
#include <algorithm>  // for max function

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Ensure that k is within the bounds
        if (k <= 0 || k > nums.size()) return 0;

        // Calculate the sum of the first 'k' elements
        double windowSum = 0;
        for (int i = 0; i < k; ++i) {
            windowSum += nums[i];
        }

        // Initialize the maximum sum with the sum of the first window
        double maxSum = windowSum;

        // Slide the window through the array
        for (int i = k; i < nums.size(); ++i) {
            // Update the window sum by removing the leftmost element and adding the new element
            windowSum += nums[i] - nums[i - k];
            // Update the maximum sum if the current window sum is greater
            maxSum = max(maxSum, windowSum);
        }

        // Calculate and return the maximum average
        return maxSum / k;
    }
};
