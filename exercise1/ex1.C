#include <stdio.h>

int main()
{
    int arr[11], sumArr[10];
    printf("Enter eleven numbers: ");
    for (int i = 0; i < 11; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++)
        sumArr[i] = arr[i] + arr[i + 1];
    printf("SUM of TWO succeeding pairs: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", sumArr[i]);
    return 0;
}