

int reverse(int x) {
    
    int sign = (x < 0)?-1:1;
    long num = x;
    long newnum = 0;
    
    while (x) {
        newnum = newnum * 10 + x % 10;
        x = x / 10;
    }

    if ((newnum > INT_MAX) || (newnum < INT_MIN)) {
            return 0;
    }
    return (x < 0)? (-1 * newnum):newnum;
}

