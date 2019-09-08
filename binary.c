#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int array[50];
    int n, i, first, last, mid, s;

    printf("input number of elements: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {
        printf("input value: \t");
        scanf("%d", &array[i]);

    }


    printf("what number are you searching for?\t");
    scanf("%d", &s);

    first = 0;
    last = n - 1;
    mid = (first + last) / 2;

    while (first <= last)
    {
        if (array[mid] < s)
        {
            first = mid + 1;
        }

        else if (s == array[mid])
        {
            printf("%d found at point %d. \n", s, mid + 1);
            break;
        }

        else
            last = mid -1 ;

            mid = (first + last) / 2;
    }

    if (first > last)
    {
        printf("%d Not found \n", s);
    }


    return 0;
}