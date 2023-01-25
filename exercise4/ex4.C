#include <stdio.h>

int main()
{
    int sizeOfArray;
    printf("Input the number of elements to be stored in both arrays: ");
    scanf("%d", &sizeOfArray);
    int arr1[sizeOfArray], arr2[sizeOfArray], mergedArr[sizeOfArray * 2];
    printf("Input %d elements in the first array: \n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
        mergedArr[i] = arr1[i];
    }
    printf("Input %d elements in the second array: \n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr2[i]);
        mergedArr[i + sizeOfArray] = arr2[i];
    }
    for (int i = 0; i < (sizeOfArray * 2) - 1; i++)
    {
        for (int j = 0; j < (sizeOfArray * 2) - 1; j++)
        {
            if (mergedArr[j] < mergedArr[j+1])
            {
                int temp = mergedArr[j];
                mergedArr[j] = mergedArr[j+1];
                mergedArr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < (sizeOfArray * 2); i++)
    {
        printf("%d ", mergedArr[i]);
    }
    return 0;
}