class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(auto& customer : accounts){
            int amount = 0;
            for (int balance : customer){
                amount += balance;
            }
            if(amount > maxWealth)
                maxWealth = amount;
        }
        return maxWealth;
    }
};