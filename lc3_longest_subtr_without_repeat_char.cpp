
#include <iostream>
#include <unordered_map>
using namespace std;

// Use a sliding window method to solve this problem

// Use two pointers, left, right & a unordered_map

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // Map to hold the individual strings
        unordered_map<string, unsigned short> set;
        unordered_map<string, unsigned short>::iterator it;
        // Two pointers for sliding window
        unsigned short left = 0, right = 0, iter = 0; 
        // Holds the size of the largest non-repeating substring
        unsigned mapsize = 0, max = 0;
        unsigned short len = s.length();
        string temp;
        
        while (right < len) {
            
            // insert the char pointed by right pointer
            temp = s[right];
            auto i = set.insert(make_pair(temp, iter++));

            // Insert successful - move right pointer & update max
            if (i.second == true) {
                right++;
                mapsize = set.size();
                if (max < mapsize) {
                    max = mapsize;
                }        
            } else {
                temp = s[left++];
                set.erase(temp);
            }
        }
        return max;
    }
};
