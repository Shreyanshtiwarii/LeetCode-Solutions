class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for (int ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';
            }
            ans.push_back(ch);
        }
        return ans;
    }
};