#define CHAR_BIT 8u
uint32_t reverseBits(uint32_t n) {
    unsigned short num_bits = sizeof(n) * CHAR_BIT;
    uint32_t rev = 0;
    int i = 0;
    
    for (;i < num_bits;i++) {
        if (n & (1u << i)) {
            rev |= (1u << (num_bits - 1) - i);
        }
    }
    return rev;
}   
