// Leet code Problem #20

public:
    bool isValid(string s) {
        
        stack C;
        
        int len = s.length();
        int i = 0;
        char last_pushed = ' ';
        char c_from_stack = ' ';
        bool result = true;
        
        if (len == 1)
            return false;
        
        while (i < len) {
            if ((s[i] != '}') &&
                (s[i] != ')') &&
                (s[i] != ']')) {
                C.push(s[i]);
            } else {
                 if (C.empty())
                     return false;
                 if ((s[i] == ']')
                     && (C.top() != '[')) {
                    return false;
                } else if ((s[i] == '}')
                     && (C.top() != '{')) {
                     return false;
                 } else if ((s[i] == ')')
                     && (C.top() != '(')) {
                     return false;
                }
                C.pop();
            }
            i++;
        } // End while
        return C.empty();
done:
        return result;
    }
};
