class Solution {
public:
    int xorOperation(int n, int start) {
        int answer = 0;         
        int num = start;        
        while (n--) {
            answer ^= num;     
            num += 2;           
        }
        return answer;          
    }
};