#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        int maxProduct(vector<int>& nums){
            int currMin = nums[0];
            int currMax = nums[0];
            int globalMax = nums[0];

            for(int i = 1; i < nums.size(); i++){
                if( nums[i] < 0) swap(currMin, currMax);

                currMin = min( nums[i], nums[i] * currMin);
                currMax = max( nums[i], nums[i] * currMax);
                globalMax = max(currMax, globalMax);
            }
            return globalMax;
        }
};