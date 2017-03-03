#include <iostream>

using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        multiset<long long> set;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) set.erase(set.find(nums[i - k - 1]));
            auto it = set.lower_bound(nums[i] - t);
            if (it != set.end() && (*it - nums[i] <= t)) return true;
            set.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution solution;
    
}
