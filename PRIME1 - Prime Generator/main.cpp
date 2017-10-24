#include <iostream>


int t;
int n, m;
bool isPrime;

int main()
{
    std::cin >> t;

    for (int time = 0; time < t; time++)
    {
        std::cin >> n >> m;
        if (n == 1)
        {
            n = 2;
        }
        for (int conNum = n; conNum <= m; ++conNum)
        {
            isPrime = true;
            for (int i = 2; i*i <= conNum; ++i)
            {
                if (conNum%i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                std::cout << conNum << std::endl;
            }
        }
    }

    return 0;
}
