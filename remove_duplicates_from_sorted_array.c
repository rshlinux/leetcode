/*
 *  https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/
 *
 *  Remove duplicates from a sorted array 
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            
            int size = nums.size();
            int cur = 0, next = 0;
            int realidx = 0;
        
            if (size == 1) {
                realidx++;
                return realidx++;
            }
        
            next = cur + 1;
        
            while (1) {
                
                if (nums[cur] != nums[next]) {                
                    nums[++realidx] = nums[next];
                }     
                cur = next;
                if ((next + 1) <= (size - 1)) {
                    next = cur + 1;
                } else {
                    realidx++;
                    break;
                }
            } /* End While */
    
            return realidx++;
    }
};
