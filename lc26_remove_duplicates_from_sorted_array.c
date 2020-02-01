int removeDuplicates(int* nums, int numsSize){

        int i = 0, j = 0;
    
        if ((!nums) || (!numsSize) || (numsSize == 1)) {
            return numsSize;
        }

        while (j < numsSize) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
            j++;
        }
        return i+1;
}
