class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
    int high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        // If mid element is greater than the last element, the min is in the right half
        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } 
        // Otherwise, the min is in the left half (including mid)
        else {
            high = mid;
        }
    }
    
    // When low equals high, it's the index of the minimum element
    return nums[low];
    }
};