// Find the minimum element in the unsorted array and swap the element at the beginning
// 		take i=0,j=i+1 ;two loops;if min swap with first 

// 20 30 40 10 50
// i  j
#include <math.h>
#include <iostream>
using namespace std;
void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int main()
{
    int n = 5;
    int arr[n] = {20, 40, 30, 10, 50};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr,i,j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}