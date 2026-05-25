#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int write = 0;

        for (int num : nums) {
            if (write < k || nums[write - k] != num) {
                nums[write] = num;
                write++;
            }
        }

        nums.resize(write);
        return nums;
    }
};