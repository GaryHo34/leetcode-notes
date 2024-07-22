class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> Records;
        for (auto num: nums)
        {
            if (Records.count(num))
                return true;
            Records.insert(num);
        }
        return false;
    }
};