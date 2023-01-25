#include <stdio.h>

int main()
{
    int sizeOfArray;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &sizeOfArray);
    int arr[sizeOfArray], copiedArr[sizeOfArray];
    printf("Input %d elements in the array: \n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
        copiedArr[i] = arr[i];
    }
    printf("\nThe elements stored in the first array are: \n");
    for (int i = 0; i < sizeOfArray; i++)
        printf("%d ", arr[i]);
    printf("\nThe elements copied into the second array are: \n");
    for (int i = 0; i < sizeOfArray; i++)
        printf("%d ", copiedArr[i]);
    return 0;
}