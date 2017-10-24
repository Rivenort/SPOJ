#include <stdio.h>


int t;
int x, y;
int result;


int main()
{
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if (x == y)
            printf("%d\n", 2*x - x%2);
        else if (x - y == 2)
            printf("%d\n", 2*x - 2 - x%2);
        else
            printf("No Number\n");
    }


    return 0;
}
