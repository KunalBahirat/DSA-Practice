#include <bits/stdc++.h>
using namespace std;
int temp;
void shell_sort(int a[], int n)
{
    int gap, i, j;
    for (gap = floor(n / 2); gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = a[i];
            j = i - gap;
            while (j >= 0 and a[j] > temp)
            {
                a[j + gap] = a[j];
                j = j - gap;
            }
            a[j + gap] = temp;
        }
    }
}
int main()
{
    int n = 11;
    int a[n] = {6, 5, 16, 8, 13, 9, 12, 10, 4, 2, 3};
    shell_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
