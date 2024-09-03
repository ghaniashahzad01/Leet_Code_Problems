#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to calculate the minimum start value to keep the running sum at least 1
    int minStartValue(vector<int>& nums) 
    {

        int currentSum = 0;       // Variable to track the current sum of elements
        
        int minCurrentSum = 0;    // Variable to track the minimum sum encountered
        
        // Iterate through each element in the nums vector
        for (int i = 0; i < nums.size(); ++i) 
        {
            currentSum += nums[i]; // Add the current element to the current sum

            minCurrentSum = min(minCurrentSum, currentSum); // Update the minimum sum encountered
        }
        
        // Return the minimum starting value such that the sum is never less than 1
        return max(1, 1 - minCurrentSum);
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    
    // Example input
    vector<int> nums = {-3, 2, -3, 4, 2};
    
    // Call the minStartValue function and store the result
    int result = solution.minStartValue(nums);
    
    // Output the result
    cout << "Minimum Start Value: " << result << endl;

    return 0;
}
