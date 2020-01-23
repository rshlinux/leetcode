// Solution for leet code problem #8

class Solution {
public:
    int myAtoi(string str) {
        int result = 0;
        stringstream s(str);
        s >> result;
        return result;
    }
};
