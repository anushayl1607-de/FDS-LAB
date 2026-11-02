#include <stdio.h>

int main()
{
    int hash[10], key, i, index, n, j;

    for (i = 0; i < 10; i++)
        hash[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &key);

        index = key % 10;

        while (hash[index] != -1)
        {
            index = (index + 1) % 10;
        }

        hash[index] = key;
    }

    printf("\nHash Table:\n");

    printf("Index\tValue\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t%d\n", i, hash[i]);
    }

    return 0;
}