#include <stdio.h>
int t, n, r =0;

int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n > 0)
          r += n;
    }
    printf("%d", r);
}
