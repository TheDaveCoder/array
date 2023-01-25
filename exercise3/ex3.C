#include <stdio.h>

int main()
{
    int sizeOfArray, dupCount;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &sizeOfArray);
    int arr[sizeOfArray];
    printf("Input %d elements in the array: \n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if (arr[i] == arr[j]) {
                dupCount++;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array is: %d", dupCount);
    return 0;
}