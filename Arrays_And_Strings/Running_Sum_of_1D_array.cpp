#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to calculate the running sum of the array nums
    vector<int> runningSum(vector<int>& nums) 
    {
        // Result vector to store the running sum
        vector<int> result;

        int sum = 0; // Variable to store the cumulative sum
        
        // Iterate through the nums array
        for (int i = 0; i < nums.size(); ++i) 
        {
            sum += nums[i];          // Add the current element to sum
            result.push_back(sum);   // Push the sum to the result vector
        }
        
        return result;  // Return the result vector containing the running sums
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    
    // Example input
    vector<int> nums = {1, 2, 3, 4};
    
    // Call the runningSum function and store the result
    vector<int> result = solution.runningSum(nums);
    
    // Output the result
    cout << "Running Sum: ";
    
    for (int i = 0; i < result.size(); ++i) 
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
