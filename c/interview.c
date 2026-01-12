#include <stdio.h>
#include <stdlib.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

/* make a function that receives an array where the numbers inside are less
 than the length of the array and find the first duplicate
example:
[1 2 1 2 3 3] = 1       the first duplicate is 1
[2 1 3 5 3 2] = 3       th firs duplica is 3 because the second 2 is after the second 3
[1 2 3 4 5 6] = -1      no duplicates
*/
int firstDuplicate(int n, int *a)
{
    int minimum_index_array = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                minimum_index_array = min(minimum_index_array, j);
            }
        }
    }
    if (minimum_index_array == n)
    {
        return -1;
    }
    else
    {
        return a[minimum_index_array];
    }
}

// solution with hash set

// solution with the size of the array
int firstDuplicate_second(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        if (a[abs(a[i]) - 1] < 0)
            return abs(a[i]);
        else
        {
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
        }
    }
    return -1;
}

// find the longes sub array that added gives you th sum solution. if no subarray is found return -1

// given an array, arrange the array from lowest to highest

void arrange_array(int n, int *a)
{
    int mayor;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                mayor = a[i];
                a[i] = a[j];
                a[j] = mayor;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {2, 1, 3, 5, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 3, 4, 5, 2};
    int b_n = sizeof(b) / sizeof(b[0]);

    printf("a size: %d\n", n);
    printf("%d\n", firstDuplicate(n, a));
    printf("%d\n", firstDuplicate_second(n, a));

    arrange_array(b_n, b);

    return 0;
}