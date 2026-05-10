#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
    public: 
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> seen; // Create a set to store seen numbers

            for(int num : nums) {
                if(seen.count(num)) { // If the number is already in the set, we have a duplicate
                    return true;
                }
                seen.insert(num); // Add the number to the set as we haven't seen it before
            }
            return false;
        }
};