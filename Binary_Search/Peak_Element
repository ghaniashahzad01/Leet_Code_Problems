class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // If the middle element is greater than its right neighbor, peak is in the left half
        if (nums[mid] > nums[mid + 1]) {
            high = mid;
        }
        // Otherwise, the peak is in the right half
        else {
            low = mid + 1;
        }
    }

    // Low will eventually point to the peak element
    return low;
    }
};