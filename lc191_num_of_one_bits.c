#ifndef CHAR_BIT
#define CHAR_BIT 8u
#endif /* CHAR_BIT */

uint32_t countbits(uint32_t n) {
    unsigned short count = 0;
    
    for (;n;count++) {
        n = n & (n - 1);
    }
    return count;
}

int hammingWeight(uint32_t n) {
    return countbits(n);
}
