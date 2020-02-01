int search(int* nums, int numsSize, int target){
    int i = 0;
    while (i < numsSize) {
        if (nums[i] == target)
            return i;
        i++;
    }
    return -1;
}
