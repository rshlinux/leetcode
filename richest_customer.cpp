/* https://leetcode.com/problems/richest-customer-wealth/ */

class Solution {
public:
    int sum_prev = 0, sum_cur = 0, sum = 0;
    int maximumWealth(vector<vector<int>>& accounts) {
            int i = 0, j = 0;
            for (i = 0; i < accounts.size();i++) {
                for (j = 0; j < accounts[i].size(); j++) {
                    sum_cur += accounts[i][j];
                }
                if (sum_prev == 0) {
                    sum_prev = sum_cur;
                } else if (sum_prev > sum_cur) {
                    sum_cur = sum_prev;
                } else {
                    sum_prev = sum_cur;
                }
                sum = sum_cur;
                sum_cur = 0;
            }
            return sum;
    }
};
