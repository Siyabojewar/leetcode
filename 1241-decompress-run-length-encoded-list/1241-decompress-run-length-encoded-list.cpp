class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());
        for (size_t i = 0; i + 1 < nums.size(); i += 2) {
            int freq = nums[i];
            int val  = nums[i + 1];
            for (int j = 0; j < freq; ++j) {
                result.push_back(val);
            }
        }
        return result;
    }
};