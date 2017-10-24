#include <stdio.h>


int a = 1;

int f(int x)
{
    if (x == 1)
        return 1;
    else
        return x*x + f(x - 1);
}

int main()
{
    while (a != 0)
    {
        scanf("%d", &a);
        if (a != 0)
            printf("%d\n", f(a));
    }


    return 0;
}
