class Solution {
public:
    string reverseWords(string s) {
        vector<string> w;
        string cur;
        for (char c : s) {
            if (c == ' ') {
                if (!cur.empty()) { w.push_back(cur); cur.clear(); }
            } else {
                cur += c;
            }
        }
        if (!cur.empty()) w.push_back(cur);
        string ans;
        for (int i = (int)w.size() - 1; i >= 0; --i) {
            if (!ans.empty()) ans += ' ';
            ans += w[i];
        }
        return ans;
    }
};