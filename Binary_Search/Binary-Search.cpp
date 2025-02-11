class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        // Binary search loop
        while (left <= right) {
            int mid = left + (right - left) / 2;  // To avoid overflow

            // Check if the middle element is the target
            if (nums[mid] == target) {
                return mid;  // Target found, return index
            }
            // If target is smaller, search in the left half
            else if (nums[mid] > target) {
                right = mid - 1;
            }
            // If target is larger, search in the right half
            else {
                left = mid + 1;
            }
        }

        return -1;  // Target not found
    }
};
