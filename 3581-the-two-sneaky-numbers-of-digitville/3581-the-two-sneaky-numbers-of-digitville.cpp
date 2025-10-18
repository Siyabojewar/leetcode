class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<int> doub;
        
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]==nums[j]){
                    doub.push_back(nums[i]);
                    
                }
            }
        }
        sort(doub.begin(),doub.end());
        return doub;
    }
};