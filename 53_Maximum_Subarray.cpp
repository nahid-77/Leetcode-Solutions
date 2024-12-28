#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for (int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;   
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = solution.maxSubArray(nums);
    
    cout << "The maximum subarray sum is: " << result << endl;
    
    return 0;
}
