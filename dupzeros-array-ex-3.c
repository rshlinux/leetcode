

void duplicateZeros(int* arr, int arrSize){
    int i = 0, j = 0;
    int *newarr = NULL;
    int nsize = sizeof(int) * arrSize;
        
    /* Allocate a new array */ 
    newarr = (int *)malloc(nsize);
    if (!newarr) {
        return;
    }
    memset(newarr, 0, nsize);
    
    i = 0, j = 0;
    while (1) {
        if (arr[i] == 0) {
            newarr[j] = arr[i];
            j++;
            if (j >= arrSize)
                break;
            newarr[j] = arr[i];
            j++;
            if (j >= arrSize)
                break;
        } else {

            newarr[j] = arr[i];
            j++;
            if (j >= arrSize)
                break;
        }
        
        i++;
        if (i >= arrSize)
            break;
    }
    
    memcpy(arr, newarr, nsize);
    free(newarr);
}
