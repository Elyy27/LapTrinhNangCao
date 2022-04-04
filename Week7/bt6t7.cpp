int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* mergedArray = new int[lenArr1 + lenArr2];
    int i = 0, j = 0, k = 0;
    if (firstArr[0] < firstArr[lenArr1 - 1]) {
        while (i < lenArr1 && j < lenArr2) {
            if (firstArr[i] < secondArr[j]) {
                mergedArray[k] = firstArr[i];
                i++;
            }
            else {
                mergedArray[k] = secondArr[j];
                j++;
            }
            k++;
        }
        while (i < lenArr1) {
            mergedArray[k] = firstArr[i];
            i++;
            k++;
        }
        while (j < lenArr2) {
            mergedArray[k] = secondArr[j];
            j++;
            k++;
        }
    }
    else {
        while (i < lenArr1 && j < lenArr2) {
            if (firstArr[i] > secondArr[j]) {
                mergedArray[k] = firstArr[i];
                i++;
            }
            else {
                mergedArray[k] = secondArr[j];
                j++;
            }
            k++;
        }
        while (i < lenArr1) {
            mergedArray[k] = firstArr[i];
            i++;
            k++;
        }
        while (j < lenArr2) {
            mergedArray[k] = secondArr[j];
            j++;
            k++;
        }
    }
    return mergedArray;
}