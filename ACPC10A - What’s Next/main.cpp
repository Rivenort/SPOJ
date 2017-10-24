#include <stdio.h>

int a, b, c;
bool flag = false;

int main()
{
    while (true)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if ((a != 0) || (b != 0) || (c != 0))
        {
            if (b - a == c - b)
                printf("AP %d\n", b-a+c );
            else if ((b != 0) && (c != 0))
            {
                    if (b/a == c/b)
                        printf("GP %d\n", (b/a)*c );
            }
            else if ((b == 0) && (c == 0))
                printf("GP 0\n" );

        }
        else
        {
            break;
        }
    }

    return 0;
}
