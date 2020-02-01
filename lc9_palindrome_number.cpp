class Solution {
public:
    bool isPalindrome(int x) {
        
        string s;
        stringstream ss;
        ss << x;
        s = ss.str();
        cout << s << endl;
        
        int i = 0, j = s.length() - 1;
        
        for (;i < j;i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
};
