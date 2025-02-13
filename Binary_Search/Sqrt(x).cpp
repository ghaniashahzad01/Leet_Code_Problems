class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;  // Special case for 0

        int left = 1, right = x;
        int ans = 0;  // Variable to store the result

        // Binary search between 1 and x
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Check if mid squared is less than or equal to x
            if (mid <= x / mid) {  // This is safer than mid*mid to avoid overflow
                ans = mid;  // mid is a valid candidate, store it
                left = mid + 1;  // Try to find a larger candidate
            } else {
                right = mid - 1;  // Reduce the search space
            }
        }

        return ans;
    }
};
