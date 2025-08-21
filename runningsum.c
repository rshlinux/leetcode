/* https://leetcode.com/explore/learn/card/the-leetcode-beginners-guide/692/challenge-problems/4422/ */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    int *out = NULL;
    int bytes = 0;
    int i = 0;
    if (returnSize)
        *returnSize = 0;

    if ((!nums) || (!numsSize)) {  
        return out;
    }

    bytes = (sizeof(int) * numsSize);
    out = (int *)malloc(bytes);
    if (!out) {
        return out;
    }
    memset(out, 0, bytes);

    out[0] = nums[i++];
    while (i < numsSize) {
        out[i++] = out[i-1] + nums[i];
    }
    *returnSize = numsSize;
    return out;
}
