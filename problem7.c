
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.");
        return 0;
    }

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array in reverse order: ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
