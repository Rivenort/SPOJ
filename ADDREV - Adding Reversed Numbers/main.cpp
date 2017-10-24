#include <stdio.h>
#include <stack>
#include <cmath>
int a, b, t,  res;
int result;
int counter;


std::stack<int> st;

int rev(int);

int main()
{

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);

        res =( rev(a)+ rev(b) );

        printf("%d\n", rev(res));

    }



    return 0;
}

int rev(int x)
{
    result = 0;
    counter = 0;
    while (x != 0)
    {
        st.push(x%10);
        x /= 10;
    }

    while (!st.empty())
    {
        x = st.top();
        st.pop();

        if (x > 0)
            result += x*((int)(pow(10,counter) + 0.5));

        counter++;
    }

   return result;
}
