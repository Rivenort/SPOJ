#include <stdio.h>

int t = 0;
int packet[10001];
double sum;
double in_one;
int steps;

int main()
{
    while (true)
    {
        scanf("%d", &t);
        if (t != -1)
        {
            sum = 0;
            steps = 0;
            for ( int i = 0; i < t; ++i)
            {
                scanf("%d", &packet[i]);
                sum += packet[i];
            }
            in_one = sum/t;

            if (in_one/((int)in_one) == 1)
            {
                for (int i = 0; i < t; ++i)
                {
                    if (packet[i] > in_one)
                        steps += (packet[i] - in_one);
                }
                printf("%d\n", steps);
            }
            else
                printf("-1\n");


        }
        else
        {
            break;
        }

    }
    return 0;
}
