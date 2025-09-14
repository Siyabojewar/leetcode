class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0], minProd = nums[0], ans = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            int x = nums[i];
            int newMax = max({x, maxProd * x, minProd * x});
            int newMin = min({x, maxProd * x, minProd * x});
            maxProd = newMax;
            minProd = newMin;
            ans = max(ans, maxProd);
        }
        return ans;
    }
};