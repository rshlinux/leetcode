
bool isPowerOfTwo(int n){
    long x = (long)n;
    if (!n)
        return false;
   return (x & (x - 1)) == 0;
}
