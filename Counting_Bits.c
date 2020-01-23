/* Solution for Leet Code Problem # 338 */

/*
 * Returns the number of bits set
 */
int bitcount(int num) {
    int c = 0;
    for (c = 0;num;c++) {
        num = num & (num - 1);
    }
    return c;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize) {

        int i = 0;
        int *res = 0;
 
        res =  (int *)malloc(sizeof(int) * (num +1));
        if (!res) {
            goto done;
        } else if (!num) {
            res[0] = 0;
            goto done;
        }
        for (i = 0;i <= num; i++) {
            res[i] = bitcount(i); 
        }
done:
        *returnSize = num + 1;
        return res;
}
