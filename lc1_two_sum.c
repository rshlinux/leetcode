/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define MAX_INDICES 2u

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int *res = NULL;
    unsigned short i = 0, j = 0, ind = 0;
    
    if ((!nums) || (!numsSize) || (numsSize < 2)) {
        return res;
    }
    
    res = (int *)malloc(sizeof(int) * MAX_INDICES);
    if (!res) {
        return res;
    }
    
    /* 
     * Start loop to scan - run as long as iterator reaches end of array
     */
     
    while (i < numsSize) {
         j = i + 1;
         while (j < numsSize) {
            if (nums[i] + nums[j] == target) {
                res[ind] = i;
                res[++ind] = j;
                *returnSize = ind + 1;
                goto done;
            }
            j++;
         }
         i++;
     }

done:
    return res;
}
