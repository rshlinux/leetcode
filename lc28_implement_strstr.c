

int strStr(char * haystack, char * needle){

        unsigned short hlen = 0, nlen = 0;
        int i = 0, j = 0, k = 0;
        int idx = -1;
    
    
        /* Check the length of haystack & needle */
        hlen = strlen(haystack);
        nlen = strlen(needle);
    
        if ((hlen == nlen) && (!hlen) && (!nlen)) {
            return 0;
        } else if (!nlen) {
            return nlen;
        } else if ((hlen > 100) && (hlen == nlen)) {
            if (memcmp(haystack, needle, nlen) != 0) {
                return -1;
            }
        }

        while (i < hlen) {
            if (needle[j] == haystack[i]) {
                k = i;
                while (j < nlen) {
                    if (needle[j] == haystack[k]) {
                        if (idx == -1) {
                            idx = k;
                        }
                    } else {
                        idx = -1;
                        j = 0;
                        break;
                    }
                    j++;
                    k++;
                }
                if (idx != -1)
                    break;
            }
            i++;
        }
        return idx;
}
