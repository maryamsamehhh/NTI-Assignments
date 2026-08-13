///Problem 12 – Insert elements of array2 into array1, keep sorted

#include <stdio.h>

int main() {
    int array1[20] = {1, 23, 5, 17, 9, 21, 13, 15, 37, 19};
    int array2[10] = {26, 24, 16, 8, 10, 12, 14, 17, 18, 20};
    int n1 = 10, n2 = 10;
    int i, k, pos;

    for (i = 0; i < n2; i++) {
        
        for (pos = 0; pos < n1; pos++) {
            if (array2[i] < array1[pos])
                break;
        }
        for (k = n1; k > pos; k--)
            array1[k] = array1[k - 1];

        array1[pos] = array2[i];
        n1++;
    }

    for (i = 0; i < n1; i++)
        printf("%d ", array1[i]);
    printf("\n");
    return 0;
}