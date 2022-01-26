#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 1000
using namespace std;

int P[MAX];

int greed(int n)
{
    int sum = 0;
    int acc = 0;
    sort(P, P + n);
    for (int i = 0; i < n; i++)
    {
        acc += P[i];
        sum = sum + acc;
    }

    return sum;
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &P[i]);
    }

    cout << greed(n) << endl;

    return 0;
}
