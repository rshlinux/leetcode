bool hasAlternatingBits(int n) {
    int res = 0;
    
    while (n) {
        res = (n & 0x3);
        if ( (res == 0x3) || !res ) {
            return false;    
        }
        n = (n >> 1);
    }
    return true;
}
